#include "UI_HandCardPage.h"
#include <algorithm>

using namespace cocos2d;

bool UI_HandCardPage::init() {
	if (!Node::init())
		return false;
	m_settleUpFinishCallBack = []() {};
	return true;
}

std::vector<std::shared_ptr<UI_Card>> & UI_HandCardPage::getCards() {
	return m_cards;
}

size_t UI_HandCardPage::getSize() const {
	return m_cards.size();
}

size_t UI_HandCardPage::getMaxSize() const {
	return m_maxSize;
}

bool UI_HandCardPage::isEmpty() const {
	return m_cards.empty();
}

bool UI_HandCardPage::isFull() const {
	if (m_cards.size() > m_maxSize)
		throw "Out of range!";
	return m_cards.size() == m_maxSize;
}

void UI_HandCardPage::setVisible(bool visible) {
	Node::setVisible(visible);
	for (auto & i : m_cards)
		i->setVisible(visible);
}

void UI_HandCardPage::settleUp(bool useAction) {
	if (useAction) {
		float time1 = 1.0f;
		float time2 = 0.5f;
		for (size_t i = 0; i < m_cards.size(); i++) {
			if (m_cards[i]->getPosition() == getPositionWithIndex(i))
				continue;
			m_cards[i]->setOpacity(100);
			auto action1 = MoveTo::create(time1, getPositionWithIndex(i));
			auto action2 = FadeIn::create(time1 * 0.7f);
			auto action3 = Spawn::create(action1, action2, nullptr);
			auto action4 = DelayTime::create(time2);
			m_cards[i]->runAction(Sequence::create(action3, action4, nullptr));
		}
		runAction(Sequence::create(DelayTime::create(time1 + time2), CallFunc::create([=]() { m_settleUpFinishCallBack(); }), nullptr));
	}
	else {
		for (size_t i = 0; i < m_cards.size(); i++)
			m_cards[i]->setPosition(getPositionWithIndex(i));
	}
}

cocos2d::Vec2 UI_HandCardPage::getPositionWithIndex(int index) const {
	if (index > m_maxSize) throw "Out of Range!";
	return Vec2(8 + index * 115, 8);
}

bool UI_HandCardPage::hasCard(const std::shared_ptr<Card> & card) const {
	for (auto & i : m_cards)
		if (card == i->getCard())
			return true;
	return false;
}

bool UI_HandCardPage::hasCard(const std::shared_ptr<UI_Card> & card) const {
	for (auto & i : m_cards)
		if (card->getCard() == i->getCard())
			return true;
	return false;
}

void UI_HandCardPage::addCard(const std::shared_ptr<Card> & card) {
	if (isFull()) throw "Page is full!";
	auto cardUi = UI_Card::create(card);
	addCard(cardUi);
}

void UI_HandCardPage::addCard(const std::shared_ptr<UI_Card> & card) {
	if (isFull()) throw "Page is full!";
	card->setAnchorPoint(Vec2::ANCHOR_BOTTOM_LEFT);
	card->setScale(0.6f);
	auto pos = getPositionWithIndex(m_maxSize - 1);
	card->setPosition(Vec2(pos.x + 20, pos.y));
	addChild(card.get(), m_maxSize - m_cards.size());
	m_cards.push_back(card);
}

std::shared_ptr<UI_Card> UI_HandCardPage::removeCard(const std::shared_ptr<Card> & card) {
	auto i = m_cards.begin();
	while (i != m_cards.end()) {
		if ((*i)->getCard() == card) {
			removeChild((*i).get());
			i = m_cards.erase(i);
			return *i;
		}
		else
			i++;
	}
	throw "Can't find match!";
}

std::shared_ptr<UI_Card> UI_HandCardPage::removeCard(const std::shared_ptr<UI_Card> & card) {
	auto i = m_cards.begin();
	while (i != m_cards.end()) {
		if (*i == card) {
			removeChild((*i).get());
			i = m_cards.erase(i);
			return *i;
		}
		else
			i++;
	}
	throw "Can't find match!";
}

std::vector<std::shared_ptr<UI_Card>> UI_HandCardPage::removeAll() {
	std::vector<std::shared_ptr<UI_Card>> v(m_cards.cbegin(), m_cards.cend());
	m_cards.clear();
	removeAllChildren();
	return v;
}

void UI_HandCardPage::setSettleUpFinishCallBack(const std::function<void()> & fun) {
	m_settleUpFinishCallBack = fun;
}
