#include "UI_HandCardPanal.h"
#include <algorithm>
#include "Manager\TextManager.h"

using namespace cocos2d;
using namespace cocos2d::ui;

bool UI_HandCardPanal::init() {
	if (!Node::init())
		return false;

	auto layer = LayerColor::create(Color4B::YELLOW);
	layer->setContentSize(Size(900, 190));
	addChild(layer);

	setContentSize(layer->getContentSize());

	auto page = UI_HandCardPage::create();
	addChild(page);
	m_pages.push_back(page);

	m_pageLabel = Label::create("", "ziti.otf", 20);
	m_pageLabel->setColor(Color3B::BLACK);
	std::string currentIndex = std::to_string(m_currentPageIndex + 1);
	std::string maxIndex = std::to_string(m_pages.size());
	std::string indexString = currentIndex + "/" + maxIndex;
	m_pageLabel->setString(TextManager::gbkToUtf8(indexString));
	m_pageLabel->setPosition(Vec2(858, 90));
	addChild(m_pageLabel);

	m_upButton = Button::create("png\\ui\\arrow_up.png");
	m_upButton->setScale(0.5f);
	m_upButton->setPosition(Vec2(858, 135));
	m_upButton->addTouchEventListener([=](Ref* pSender, Widget::TouchEventType type) {
		switch (type) {
			case Widget::TouchEventType::BEGAN: break;
			case Widget::TouchEventType::MOVED: break;
			case Widget::TouchEventType::ENDED:
				setCurrentPage(m_currentPageIndex - 1);
				break;
			case Widget::TouchEventType::CANCELED: break;
			default: throw "Can't find match!"; break;
		}
	});
	addChild(m_upButton);

	m_downButton = Button::create("png\\ui\\arrow_down.png");
	m_downButton->setScale(0.5f);
	m_downButton->setPosition(Vec2(858, 45));
	m_downButton->addTouchEventListener([=](Ref* pSender, Widget::TouchEventType type) {
		switch (type) {
			case Widget::TouchEventType::BEGAN: break;
			case Widget::TouchEventType::MOVED: break;
			case Widget::TouchEventType::ENDED:
				setCurrentPage(m_currentPageIndex + 1);
				break;
			case Widget::TouchEventType::CANCELED: break;
			default: throw "Can't find match!"; break;
		}
	});
	addChild(m_downButton);

	scheduleUpdate();
	return true;
}

UI_HandCardPage * UI_HandCardPanal::getPageByIndex(int index) const {
	if (index < 0 || index >= m_pages.size())
		throw "Out of Range!";
	return m_pages[index];
}

UI_HandCardPage * UI_HandCardPanal::getCurrentPage() const {
	return getPageByIndex(m_currentPageIndex);
}

void UI_HandCardPanal::setCurrentPage(int index) {
	if (index < 0 || index >= m_pages.size())
		throw "Out of Range!";
	if (m_currentPageIndex == index)
		return;

	m_pages[m_currentPageIndex]->setVisible(false);
	m_currentPageIndex = index;
	m_pages[m_currentPageIndex]->setVisible(true);
}

void UI_HandCardPanal::pageUp() {
	if (m_currentPageIndex - 1 < 0)
		throw "Out of Range!";
	setCurrentPage(m_currentPageIndex - 1);
}

void UI_HandCardPanal::pageDown() {
	if (m_currentPageIndex + 1 > m_pages.size())
		throw "Out of Range!";
	setCurrentPage(m_currentPageIndex + 1);
}

std::shared_ptr<UI_Card> UI_HandCardPanal::addCard(const std::shared_ptr<Card> & card) {
	auto uiCard = UI_Card::create(card);
	addCard(uiCard);
	return uiCard;
}

void UI_HandCardPanal::addCard(const std::shared_ptr<UI_Card> & card) {
	m_addCardQueue.push_back(card);
}

std::shared_ptr<UI_Card> UI_HandCardPanal::removeCard(const std::shared_ptr<Card> & card) {
	for (auto & i : m_pages) {
		if (i->hasCard(card)) {
			m_needToReset = true;
			return i->removeCard(card);
		}
	}
	throw "Can't find Card!";
}

std::shared_ptr<UI_Card> UI_HandCardPanal::removeCard(const std::shared_ptr<UI_Card> & card) {
	for (auto & i : m_pages) {
		if (i->hasCard(card)) {
			m_needToReset = true;
			return i->removeCard(card);
		}
	}
	throw "Can't find Card!";
}

void UI_HandCardPanal::removeEmptyPage() {
	auto i = m_pages.begin();
	while (i != m_pages.end()) {
		if ((*i)->isEmpty()) {
			removeChild(*i);
			i = m_pages.erase(i);
		}
		else
			i++;
	}
	if (!m_pages.empty())
		setCurrentPage(0);
	else {
		auto page = UI_HandCardPage::create();
		addChild(page);
		m_pages.push_back(page);
		setCurrentPage(0);
	}
}

void UI_HandCardPanal::reset() {
	if (m_pages.size() == 1)
		getPageByIndex(0)->settleUp(true);
	else {
		setCurrentPage(0);
		auto i = m_pages.begin() + 1;
		while (i != m_pages.end()) {
			auto & v = (*i)->removeAll();
			m_addCardQueue.insert(m_addCardQueue.end(), v.begin(), v.end());
			removeChild(*i);
			i = m_pages.erase(i);
		}
		getCurrentPage()->settleUp(true);
	}
}

void UI_HandCardPanal::for_each_card(const std::function<void(const std::shared_ptr<UI_Card> &)> & fun) const {
	auto i = m_pages.begin();
	while (i != m_pages.end()) {
		auto & v = (*i)->getCards();
		std::for_each(v.begin(), v.end(), fun);
		i++;
	}
}

void UI_HandCardPanal::update(float delta) {
	static bool canAddCard = true;
	if (m_needToReset) {
		canAddCard = false;
		m_pages[0]->setSettleUpFinishCallBack([]() { 
			canAddCard = true; 
		});
		reset();
		m_needToReset = false;
	}

	if (!m_addCardQueue.empty() && canAddCard) {
		canAddCard = false;
		auto lastPage = m_pages.back();
		size_t left = lastPage->getMaxSize() - lastPage->getSize();

		if (!left) {
			auto page = UI_HandCardPage::create();
			addChild(page);
			m_pages.push_back(page);
			lastPage = page;
			left = lastPage->getMaxSize();
		}

		setCurrentPage(m_pages.size() - 1);
		int length = std::min(left, m_addCardQueue.size());

		for (int i = 0; i < length; i++) {
			auto card = m_addCardQueue.front();
			card->setVisible(true);
			lastPage->addCard(card);
			m_addCardQueue.pop_front();
		}

		setCurrentPage(m_pages.size() - 1);
		lastPage->settleUp(true);
		lastPage->setSettleUpFinishCallBack([]() { canAddCard = true; });
	}

	std::string currentIndex = std::to_string(m_currentPageIndex + 1);
	std::string maxIndex = std::to_string(m_pages.size());
	std::string indexString = currentIndex + "/" + maxIndex;
	m_pageLabel->setString(TextManager::gbkToUtf8(indexString));
	m_upButton->setEnabled(m_currentPageIndex > 0);
	m_downButton->setEnabled(m_currentPageIndex < m_pages.size() - 1);
}
//	Todo:stm delete or not
// void UI_HandCardPanal::finish() const {
// 	//善后处理：所有卡牌setuppding(const false)，setdark(const false)，
// 	// TODO - implement UI_HandCardPanal::finish
// 	throw "Not yet implemented";
// }
