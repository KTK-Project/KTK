#include "cocos2d.h"
#include "UI_Card.h"
#include <memory>

using std::shared_ptr;
using cocos2d::Label;
using cocos2d::Action;
using cocos2d::EventListenerTouchOneByOne;

UI_Card* UI_Card::create(shared_ptr<Card> card) {
	// TODO - implement UI_Card::create
	throw "Not yet implemented";
}

bool UI_Card::initWithCard(shared_ptr<Card> card) {
	// TODO - implement UI_Card::initWithCard
	throw "Not yet implemented";
}

void UI_Card::initListenToUpDown() {
	// TODO - implement UI_Card::initListenToUpDown
	throw "Not yet implemented";
}

shared_ptr<Card> UI_Card::getCard() {
	// TODO - implement UI_Card::getCard
	throw "Not yet implemented";
}

void UI_Card::setCard(shared_ptr<Card> card) {
	// TODO - implement UI_Card::setCard
	throw "Not yet implemented";
}

void UI_Card::setM_description(Label* m_description) {
	this->m_description = m_description;
}

bool UI_Card::getM_dark() {
	return this->m_dark;
}

void UI_Card::setM_dark(bool m_dark) {
	this->m_dark = m_dark;
}

bool UI_Card::getM_canUp() {
	return this->m_canUp;
}

void UI_Card::setM_canUp(bool m_canUp) {
	this->m_canUp = m_canUp;
}

bool UI_Card::getM_upping() {
	return this->m_upping;
}

void UI_Card::setM_upping(bool m_upping) {
	this->m_upping = m_upping;
}

void UI_Card::setM_upCallBack(std::function<void (UI_Card*)> m_upCallBack) {
	this->m_upCallBack = m_upCallBack;
}

void UI_Card::setM_downCallBack(std::function<void (UI_Card*)> m_downCallBack) {
	this->m_downCallBack = m_downCallBack;
}

Action* UI_Card::runAction(Action* action) {
	// TODO - implement UI_Card::runAction
	throw "Not yet implemented";
}

EventListenerTouchOneByOne* UI_Card::getM_listener() {
	return this->m_listener;
}
