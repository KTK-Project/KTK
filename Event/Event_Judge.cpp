#include "Event_Judge.h"

const std::shared_ptr<Card> & Event_Judge::getJudgeCard() const {
	return m_judgeCard;
}

void Event_Judge::setJudgeCard(const std::shared_ptr<Card> & judgeCard) {
	m_judgeCard = judgeCard;
}

const std::function<bool (const std::shared_ptr<Card> &)> & Event_Judge::getJudgeCheck() const {
	return m_judgeCheck;
}

void Event_Judge::setJudgeCheck(const std::function<bool (const std::shared_ptr<Card> &)> & judgeCheck) {
	m_judgeCheck = judgeCheck;
}

bool Event_Judge::getJudgeResult() const {
	return m_judgeResult;
}

void Event_Judge::setJudgeResult(bool judgeResult) {
	m_judgeResult = judgeResult;
}

void Event_Judge::eventResolve() const {
	//记得司马懿的鬼才技能
	// TODO - implement Event_Judge::eventResolve
	throw "Not yet implemented";
}
