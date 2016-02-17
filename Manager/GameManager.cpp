#include "GameManager.h"

GameManager * GameManager::getInstance() {
	static GameManager * instance = nullptr;
	if (instance == nullptr)
		instance = new GameManager;
	return instance;
}

GameManager::GameManager() {
	// 构建playermanager
	throw "Not yet implemented";
}

//	Todo: stl
PlayersManager & GameManager::getPlayerManager() {
	// TODO - implement GameManager::getPlayerManager
	throw "Not yet implemented";
}

//	Todo: stl
RoundManager & GameManager::getRoundManager() {
	// TODO - implement GameManager::getRoundManager
	throw "Not yet implemented";
}

//	Todo: stl
EventManagers & GameManager::getEventManager() {
	// TODO - implement GameManager::getEventManager
	throw "Not yet implemented";
}

//	Todo: stl
CardPile & GameManager::getDarkcardPile() {
	// TODO - implement GameManager::getDarkcardPile
	throw "Not yet implemented";
}

//	Todo: stl
CardPile & GameManager::getDiscardPile() {
	// TODO - implement GameManager::getDiscardPile
	throw "Not yet implemented";
}

void GameManager::gameBegin() const {
	// 玩家选择角色。
	// 初始化所有的管理器。
	// TODO - implement GameManager::gameBegin
	throw "Not yet implemented";
}

void GameManager::gameEnd() const {
	// TODO - implement GameManager::gameEnd
	throw "Not yet implemented";
}
