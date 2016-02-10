#include "SelectedCards.h"

std::deque<UI_Card*>& SelectedCards::getCards() {
	// TODO - implement SelectedCards::getCards
	throw "Not yet implemented";
}

void SelectedCards::addCard(UI_Card* card) {
	//如果卡牌数量为maxsize，调用popfront。调用卡牌setupping(true)
//当卡牌选择数量达到maxsize时，调用maxCallBack，否则调用unmaxcallback
	// TODO - implement SelectedCards::addCard
	throw "Not yet implemented";
}

void SelectedCards::removeCard(UI_Card* card) {
	//移除这个元素，如果小于max，调用unmaxcallback
	// TODO - implement SelectedCards::removeCard
	throw "Not yet implemented";
}

void SelectedCards::popFront() {
	//调用removecard，移除第一元素
	// TODO - implement SelectedCards::popFront
	throw "Not yet implemented";
}

void SelectedCards::popAll() {
	//所有卡牌调用setupping(false)
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

int SelectedCards::getMaxSelects() {
	return this->m_maxSelects;
}

void SelectedCards::setMaxSelects(int m_maxSelects) {
	this->m_maxSelects = m_maxSelects;
}

void SelectedCards::setMaxCallBack(std::function<void ()> m_maxCallBack) {
	this->m_maxCallBack = m_maxCallBack;
}

void SelectedCards::setUnmaxCallBack(std::function<void ()> m_unmaxCallBack) {
	this->m_unmaxCallBack = m_unmaxCallBack;
}
