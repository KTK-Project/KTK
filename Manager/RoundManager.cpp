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

int RoundManager::getRoundsCount() const {
	return m_roundsCount;
}

bool RoundManager::getStageFinish() const {
	return m_stageFinish;
}

void RoundManager::setStageFinish(bool stageFinish) {
	m_stageFinish = stageFinish;
}

bool RoundManager::getRoundFinish() const {
	return m_roundFinish;
}

void RoundManager::setRoundFinish(bool roundFinish) {
	m_roundFinish = roundFinish;
}

void RoundManager::enterNextStage() {
	switch (m_currentStage)
	{
		case EStage::READY: m_currentStage = EStage::JUDGE;
			break;
		case EStage::JUDGE: m_currentStage = EStage::DRAWCARD;
			break;
		case EStage::DRAWCARD: m_currentStage = EStage::PLAYCARD;
			break;
		case EStage::PLAYCARD: m_currentStage = EStage::DISCARD;
			break;
		case EStage::DISCARD: m_currentStage = EStage::ROUNDEND;
			break;
		case EStage::ROUNDEND: m_currentStage = EStage::READY;
			break;
		default: throw "Can't find match!"; break;
	}
}

void RoundManager::enterNextRound() {
	m_roundsCount++;
}
