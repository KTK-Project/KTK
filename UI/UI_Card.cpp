#include "cocos2d.h"
#include "UI_Card.h"
#include <memory>

using std::shared_ptr;
using cocos2d::Label;
using cocos2d::Action;
using cocos2d::EventListenerTouchOneByOne;

UI_Card* UI_Card::create(const shared_ptr<Card> card) const {
	// TODO - implement UI_Card::create
	throw "Not yet implemented";
}

bool UI_Card::initWithCard(const shared_ptr<Card> card) const {
	// TODO - implement UI_Card::initWithCard
	throw "Not yet implemented";
}

void UI_Card::initListenToUpDown() const {
	// TODO - implement UI_Card::initListenToUpDown
	throw "Not yet implemented";
}

shared_ptr<Card> UI_Card::getCard() const {
	// TODO - implement UI_Card::getCard
	throw "Not yet implemented";
}

void UI_Card::setCard(const shared_ptr<Card> card) const {
	// TODO - implement UI_Card::setCard
	throw "Not yet implemented";
}

void UI_Card::setDescription(const Label* m_description) const {
	throw "Not yet implemented";
}

bool UI_Card::getDark() const {
	return this->m_dark;
}

void UI_Card::setDark(const bool m_dark) const {
	throw "Not yet implemented";
}

bool UI_Card::getCanUp() const {
	return this->m_canUp;
}

void UI_Card::setCanUp(const bool m_canUp) const {
	throw "Not yet implemented";
}

bool UI_Card::getUpping() const {
	return this->m_upping;
}

void UI_Card::setUpping(const bool m_upping) const {
	throw "Not yet implemented";
}

void UI_Card::setUpCallBack(const std::function<void (const UI_Card*)> m_upCallBack) const {
	throw "Not yet implemented";
}

void UI_Card::setDownCallBack(const std::function<void (const UI_Card*)> m_downCallBack) const {
	throw "Not yet implemented";
}

Action* UI_Card::runAction(const Action* action) const {
	// TODO - implement UI_Card::runAction
	throw "Not yet implemented";
}

EventListenerTouchOneByOne* UI_Card::getListener() const {
	return this->m_listener;
}
