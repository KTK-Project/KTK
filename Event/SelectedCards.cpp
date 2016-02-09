#include "SelectedCards.h"

std::deque<UI_Card*>& SelectedCards::getCards() {
	// TODO - implement SelectedCards::getCards
	throw "Not yet implemented";
}

void SelectedCards::addCard(UI_Card* card) {
	// TODO - implement SelectedCards::addCard
	throw "Not yet implemented";
}

void SelectedCards::removeCard(UI_Card* card) {
	// TODO - implement SelectedCards::removeCard
	throw "Not yet implemented";
}

void SelectedCards::popFront() {
	// TODO - implement SelectedCards::popFront
	throw "Not yet implemented";
}

void SelectedCards::popAll() {
	// TODO - implement SelectedCards::popAll
	throw "Not yet implemented";
}

bool SelectedCards::hasCard(std::shared_ptr<Card> card) {
	// TODO - implement SelectedCards::hasCard
	throw "Not yet implemented";
}

bool SelectedCards::hasCard(UI_Card* card) {
	// TODO - implement SelectedCards::hasCard
	throw "Not yet implemented";
}

int SelectedCards::getM_maxSelects() {
	return this->m_maxSelects;
}

void SelectedCards::setM_maxSelects(int m_maxSelects) {
	this->m_maxSelects = m_maxSelects;
}

void SelectedCards::setM_maxCallBack(std::function<void ()> m_maxCallBack) {
	this->m_maxCallBack = m_maxCallBack;
}

void SelectedCards::setM_unmaxCallBack(std::function<void ()> m_unmaxCallBack) {
	this->m_unmaxCallBack = m_unmaxCallBack;
}
