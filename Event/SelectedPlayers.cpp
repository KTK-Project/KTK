#include "SelectedPlayers.h"

std::deque<std::shared_ptr<Player>> SelectedPlayers::getPlayers() const {
	return this->m_players;
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

//	Todo:stl
int SelectedPlayers::getMaxSelects() const {
	return m_maxSelects;
}

//	Todo:stl
void SelectedPlayers::setMaxSelects(int maxSelects) {
	m_maxSelects = maxSelects;
}

//	Todo:stl
const std::function<void()> & SelectedPlayers::getMaxCallBack() const {
	return this->m_maxCallBack;
}

//	Todo:stl
void SelectedPlayers::setMaxCallBack(const std::function<void ()> & m_maxCallBack) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::function<void ()> & SelectedPlayers::getUnmaxCallBack() const {
	return this->m_unmaxCallBack;
}

//	Todo:stl
void SelectedPlayers::setUnmaxCallBack(const std::function<void ()> & unmaxCallBack) {
	throw "Not yet implemented";
}
