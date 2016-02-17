#include "SelectedPlayers.h"

std::deque<std::shared_ptr<Player>> SelectedPlayers::getPlayers() const {
	return this->m_players;
}

void SelectedPlayers::addPlayer(const std::shared_ptr<Player> player) const {
	// TODO - implement SelectedPlayers::addPlayer
	throw "Not yet implemented";
}

void SelectedPlayers::removePlayer(const std::shared_ptr<Player> player) const {
	// TODO - implement SelectedPlayers::removePlayer
	throw "Not yet implemented";
}

void SelectedPlayers::popFront() const {
	// TODO - implement SelectedPlayers::popFront
	throw "Not yet implemented";
}

void SelectedPlayers::popAll() const {
	// TODO - implement SelectedPlayers::popAll
	throw "Not yet implemented";
}

bool SelectedPlayers::hasPlayer(const std::shared_ptr<Player> player) const {
	// TODO - implement SelectedPlayers::hasPlayer
	throw "Not yet implemented";
}

std::function<void ()> SelectedPlayers::getMaxCallBack() const {
	return this->m_maxCallBack;
}

void SelectedPlayers::setMaxCallBack(const std::function<void ()> m_maxCallBack) const {
	throw "Not yet implemented";
}

std::function<void ()> SelectedPlayers::getUnmaxCallBack() const {
	return this->m_unmaxCallBack;
}

void SelectedPlayers::setUnmaxCallBack(const std::function<void ()> m_unmaxCallBack) const {
	throw "Not yet implemented";
}
