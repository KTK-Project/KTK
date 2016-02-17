#include "RoundManager.h"
#include "KTK_Info.h"

RoundManager::RoundManager() {
	m_roundsCount = 0;
	m_stageFinish = false;
	m_roundFinish = false;
	m_currentStage = EStage::NONE;
}

void RoundManager::readyStage() const {
	// TODO - implement RoundManager::readyStage
	throw "Not yet implemented";
}

void RoundManager::judgeStage() const {
	// TODO - implement RoundManager::judgeStage
	throw "Not yet implemented";
}

void RoundManager::drawCardStage() const {
	// TODO - implement RoundManager::drawCardStage
	throw "Not yet implemented";
}

void RoundManager::playCardStage() const {
	// TODO - implement RoundManager::playCardStage
	throw "Not yet implemented";
}

void RoundManager::discardStage() const {
	// TODO - implement RoundManager::discardStage
	throw "Not yet implemented";
}

void RoundManager::roundEndStage() const {
	// TODO - implement RoundManager::roundEndStage
	throw "Not yet implemented";
}

//	Todo: stl
int RoundManager::getRoundsCount() const {
	// TODO - implement RoundManager::getRoundsCount
	throw "Not yet implemented";
}

//	Todo: stl
bool RoundManager::getStageFinish() const {
	// TODO - implement RoundManager::getStageFinish
	throw "Not yet implemented";
}

//	Todo: stl
void RoundManager::setStageFinish(bool stageFinish) {
	// TODO - implement RoundManager::setStageFinish
	throw "Not yet implemented";
}

//	Todo: stl
bool RoundManager::getRoundFinish() const {
	// TODO - implement RoundManager::getRoundFinish
	throw "Not yet implemented";
}

//	Todo: stl
void RoundManager::setRoundFinish(bool roundFinish) {
	// TODO - implement RoundManager::setRoundFinish
	throw "Not yet implemented";
}

//	Todo: stl
void RoundManager::enterNextStage() {
	switch (m_currentStage)
	{
		case EStage::READY:
			break;
		case EStage::JUDGE:
			break;
		case EStage::DRAWCARD:
			break;
		case EStage::PLAYCARD:
			break;
		case EStage::DISCARD:
			break;
		case EStage::ROUNDEND:
			break;
		default: throw "Can't find match!"; break;
	}
}

void RoundManager::enterNextRound() {
	m_roundsCount++;
}
