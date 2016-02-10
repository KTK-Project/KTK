#include "Event_Judge.h"

std::shared_ptr<Card> Event_Judge::getJudgeCard() {
	return this->m_judgeCard;
}

void Event_Judge::setJudgeCard(std::shared_ptr<Card> m_judgeCard) {
	this->m_judgeCard = m_judgeCard;
}

std::function<bool (std::shared_ptr<Card>)> Event_Judge::getJudgeCheck() {
	return this->m_judgeCheck;
}

void Event_Judge::setJudgeCheck(std::function<bool (std::shared_ptr<Card>)> m_judgeCheck) {
	this->m_judgeCheck = m_judgeCheck;
}

bool Event_Judge::getJudgeResult() {
	return this->m_judgeResult;
}

void Event_Judge::setJudgeResult(bool m_judgeResult) {
	this->m_judgeResult = m_judgeResult;
}

void Event_Judge::eventResolve() {
	//记得司马懿的鬼才技能
	// TODO - implement Event_Judge::eventResolve
	throw "Not yet implemented";
}
