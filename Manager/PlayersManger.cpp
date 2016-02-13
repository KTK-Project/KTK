#include "PlayersManger.h"

std::vector<std::shared_ptr<Player>>& PlayersManger::getPlayers() const {
	// TODO - implement PlayersManger::getPlayers
	throw "Not yet implemented";
}

std::vector<std::shared_ptr<Player>> PlayersManger::getPlayers(const std::function<bool (const std::shared_ptr<Player>)> filter) const {
	// TODO - implement PlayersManger::getPlayers
	throw "Not yet implemented";
}

std::shared_ptr<Player> PlayersManger::getNextPlayer(const std::shared_ptr<Player> player) const {
	// TODO - implement PlayersManger::getNextPlayer
	throw "Not yet implemented";
}

std::shared_ptr<Player> PlayersManger::getNextPlayerWithFilter(const std::shared_ptr<Player> player, const std::function<bool (const std::shared_ptr<Player>)> filter) const {
	// TODO - implement PlayersManger::getNextPlayerWithFilter
	throw "Not yet implemented";
}

int PlayersManger::getPlayerCount(const std::function<bool (const std::shared_ptr<Player>)> filter) const {
	// TODO - implement PlayersManger::getPlayerCount
	throw "Not yet implemented";
}

int PlayersManger::getDistanceFromTwoPlayers(const std::shared_ptr<Player> firstPlayer, const std::shared_ptr<Player> secondPlayer) const {
	// TODO - implement PlayersManger::getDistanceFromTwoPlayers
	throw "Not yet implemented";
}

std::shared_ptr<Player> PlayersManger::getLordPlayer() const {
	// TODO - implement PlayersManger::getLordPlayer
	throw "Not yet implemented";
}

void PlayersManger::setLordPlayer(const std::shared_ptr<Player> lordPlayer) const {
	// TODO - implement PlayersManger::setLordPlayer
	throw "Not yet implemented";
}

std::shared_ptr<Player> PlayersManger::getCurrentPlayer() const {
	// TODO - implement PlayersManger::getCurrentPlayer
	throw "Not yet implemented";
}

void PlayersManger::setCurrentPlayer(const std::shared_ptr<Player> currentPlayer) const {
	// TODO - implement PlayersManger::setCurrentPlayer
	throw "Not yet implemented";
}

std::shared_ptr<Player> PlayersManger::getForwardPlayer() const {
	// TODO - implement PlayersManger::getForwardPlayer
	throw "Not yet implemented";
}

void PlayersManger::setForwardPlayer(const std::shared_ptr<Player> forwardPlayer) const {
	// TODO - implement PlayersManger::setForwardPlayer
	throw "Not yet implemented";
}
