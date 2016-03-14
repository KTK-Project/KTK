#include "UI_HandCardPage.h"

using namespace cocos2d;

bool UI_HandCardPage::init() {
	if (!Node::init())
		return false;
	auto layer = LayerColor::create(Color4B::YELLOW);
	layer->setContentSize(Size(900, 190));
	addChild(layer);

	return true;
}

std::vector<UI_Card *> & UI_HandCardPage::getCards() {
	return m_cards;
}

int UI_HandCardPage::getSize() const {
	return m_cards.size();
}

bool UI_HandCardPage::isEmpty() const {
	return m_cards.empty();
}

bool UI_HandCardPage::isFull() const {
	if (m_cards.size() > m_maxSize)
		throw "Out of range!";
	return m_cards.size() == m_maxSize;
}

void UI_HandCardPage::settleUp(bool useAction) {
	if (useAction) {
		for (size_t i = 0; i < m_cards.size(); i++)
			m_cards[i]->runAction(MoveTo::create(1.0f, getPositionWithIndex(i)));
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

bool UI_HandCardPage::hasCard(const UI_Card * card) const {
	for (auto & i : m_cards)
		if (card == i)
			return true;
	return false;
}

void UI_HandCardPage::addCard(const std::shared_ptr<Card> & card) {
	if (isFull()) throw "Page is full!";
	auto cardUi = UI_Card::create(card);
	addCard(cardUi);
}

void UI_HandCardPage::addCard(UI_Card * card) {
	if (isFull()) throw "Page is full!";
	card->setAnchorPoint(Vec2::ANCHOR_BOTTOM_LEFT);
	card->setScale(0.6f);
	card->setPosition(getPositionWithIndex(m_maxSize));
	addChild(card);
	m_cards.push_back(card);
}

UI_Card * UI_HandCardPage::removeCard(const std::shared_ptr<Card> & card) {
	for (auto i = m_cards.begin(); i != m_cards.end(); i++)
		if ((*i)->getCard() == card) {
			auto val = *i;
			i = m_cards.erase(i);
			return val;
		}
	throw "Can't find match!";
}

UI_Card * UI_HandCardPage::removeCard(const UI_Card * card) {
	for (auto i = m_cards.begin(); i != m_cards.end(); i++)
		if (*i == card) {
			auto val = *i;
			i = m_cards.erase(i);
			return val;
		}
	throw "Can't find match!";
}

std::vector<UI_Card *> UI_HandCardPage::removeAll() {
	std::vector<UI_Card *> v(m_cards.cbegin(), m_cards.cend());
	m_cards.clear();
	return v;
}

//	Todo:delete of not;
// void UI_HandCardPage::setAddCardFinishCallBack(const std::function<void ()> & m_addCardFinishCallBack) {
// 	// TODO - implement UI_HandCardPage::setAddCardFinishCallBack
// 	throw "Not yet implemented";
// }
