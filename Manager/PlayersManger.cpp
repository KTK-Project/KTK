#include "PlayersManger.h"

std::vector<std::shared_ptr<Player>>& PlayersManger::getPlayers() {
	// TODO - implement PlayersManger::getPlayers
	throw "Not yet implemented";
}

std::vector<std::shared_ptr<Player>> PlayersManger::getPlayers(std::function<bool (std::shared_ptr<Player>)> filter) {
	// TODO - implement PlayersManger::getPlayers
	throw "Not yet implemented";
}

std::shared_ptr<Player> PlayersManger::getNextPlayer(std::shared_ptr<Player> player) {
	// TODO - implement PlayersManger::getNextPlayer
	throw "Not yet implemented";
}

std::shared_ptr<Player> PlayersManger::getNextPlayerWithFilter(std::shared_ptr<Player> player, std::function<bool (std::shared_ptr<Player>)> filter) {
	// TODO - implement PlayersManger::getNextPlayerWithFilter
	throw "Not yet implemented";
}

int PlayersManger::getPlayerCount(std::function<bool (std::shared_ptr<Player>)> filter) {
	// TODO - implement PlayersManger::getPlayerCount
	throw "Not yet implemented";
}

int PlayersManger::getDistanceFromTwoPlayers(std::shared_ptr<Player> firstPlayer, std::shared_ptr<Player> secondPlayer) {
	// TODO - implement PlayersManger::getDistanceFromTwoPlayers
	throw "Not yet implemented";
}

std::shared_ptr<Player> PlayersManger::getLordPlayer() {
	// TODO - implement PlayersManger::getLordPlayer
	throw "Not yet implemented";
}

void PlayersManger::setLordPlayer(std::shared_ptr<Player> lordPlayer) {
	// TODO - implement PlayersManger::setLordPlayer
	throw "Not yet implemented";
}

std::shared_ptr<Player> PlayersManger::getCurrentPlayer() {
	// TODO - implement PlayersManger::getCurrentPlayer
	throw "Not yet implemented";
}

void PlayersManger::setCurrentPlayer(std::shared_ptr<Player> currentPlayer) {
	// TODO - implement PlayersManger::setCurrentPlayer
	throw "Not yet implemented";
}

std::shared_ptr<Player> PlayersManger::getForwardPlayer() {
	// TODO - implement PlayersManger::getForwardPlayer
	throw "Not yet implemented";
}

void PlayersManger::setForwardPlayer(std::shared_ptr<Player> forwardPlayer) {
	// TODO - implement PlayersManger::setForwardPlayer
	throw "Not yet implemented";
}
