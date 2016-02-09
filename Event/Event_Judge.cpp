#include "Event_Judge.h"
#include <memory>

using std::shared_ptr;

Card* Event_Judge::getM_judgeCard() {
	return this->m_judgeCard;
}

void Event_Judge::setM_judgeCard(Card* m_judgeCard) {
	this->m_judgeCard = m_judgeCard;
}

std::function<bool (Card*)> Event_Judge::getM_judgeCheck() {
	return this->m_judgeCheck;
}

void Event_Judge::setM_judgeCheck(std::function<bool (Card*)> m_judgeCheck) {
	this->m_judgeCheck = m_judgeCheck;
}

bool Event_Judge::getM_judgeResult() {
	return this->m_judgeResult;
}

void Event_Judge::setM_judgeResult(bool m_judgeResult) {
	this->m_judgeResult = m_judgeResult;
}

void Event_Judge::eventResolve() {
	// TODO - implement Event_Judge::eventResolve
	throw "Not yet implemented";
}
