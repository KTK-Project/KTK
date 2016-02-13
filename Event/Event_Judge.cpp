#include "Event_Judge.h"

std::shared_ptr<Card> Event_Judge::getJudgeCard() const {
	return this->m_judgeCard;
}

void Event_Judge::setJudgeCard(const std::shared_ptr<Card> m_judgeCard) const {
	this->m_judgeCard = m_judgeCard;
}

std::function<bool (const std::shared_ptr<Card>)> Event_Judge::getJudgeCheck() const {
	return this->m_judgeCheck;
}

void Event_Judge::setJudgeCheck(const std::function<bool (const std::shared_ptr<Card>)> m_judgeCheck) const {
	this->m_judgeCheck = m_judgeCheck;
}

bool Event_Judge::getJudgeResult() const {
	return this->m_judgeResult;
}

void Event_Judge::setJudgeResult(const bool m_judgeResult) const {
	this->m_judgeResult = m_judgeResult;
}

void Event_Judge::eventResolve() const {
	//记得司马懿的鬼才技能
	// TODO - implement Event_Judge::eventResolve
	throw "Not yet implemented";
}
