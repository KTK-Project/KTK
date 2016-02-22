#include "Event_Judge.h"

//	Todo:stl
const std::shared_ptr<Card> & Event_Judge::getJudgeCard() const {
	return this->m_judgeCard;
}

//	Todo:stl
void Event_Judge::setJudgeCard(const std::shared_ptr<Card> & judgeCard) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::function<bool (const std::shared_ptr<Card> &)> & Event_Judge::getJudgeCheck() const {
	return this->m_judgeCheck;
}

//	Todo:stl
void Event_Judge::setJudgeCheck(const std::function<bool (const std::shared_ptr<Card> &)> & judgeCheck) {
	throw "Not yet implemented";
}

//	Todo:stl
bool Event_Judge::getJudgeResult() const {
	return this->m_judgeResult;
}

//	Todo:stl
void Event_Judge::setJudgeResult(bool judgeResult) {
	throw "Not yet implemented";
}

void Event_Judge::eventResolve() const {
	//记得司马懿的鬼才技能
	// TODO - implement Event_Judge::eventResolve
	throw "Not yet implemented";
}
