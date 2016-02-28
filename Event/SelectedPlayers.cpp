#include "SelectedPlayers.h"

std::deque<std::shared_ptr<Player>> SelectedPlayers::getPlayers() const {
	return m_players;
}

void SelectedPlayers::addPlayer(const std::shared_ptr<Player> & player) const {
	// TODO - implement SelectedPlayers::addPlayer
	throw "Not yet implemented";
}

void SelectedPlayers::removePlayer(const std::shared_ptr<Player> & player) const {
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

bool SelectedPlayers::hasPlayer(const std::shared_ptr<Player> & player) const {
	// TODO - implement SelectedPlayers::hasPlayer
	throw "Not yet implemented";
}

int SelectedPlayers::getMaxSelects() const {
	return m_maxSelects;
}

void SelectedPlayers::setMaxSelects(int maxSelects) {
	m_maxSelects = maxSelects;
}

const std::function<void()> & SelectedPlayers::getMaxCallBack() const {
	return m_maxCallBack;
}

void SelectedPlayers::setMaxCallBack(const std::function<void ()> & maxCallBack) {
	m_maxCallBack = maxCallBack;
}

const std::function<void ()> & SelectedPlayers::getUnmaxCallBack() const {
	return m_unmaxCallBack;
}

void SelectedPlayers::setUnmaxCallBack(const std::function<void ()> & unmaxCallBack) {
	m_unmaxCallBack = unmaxCallBack;
}
