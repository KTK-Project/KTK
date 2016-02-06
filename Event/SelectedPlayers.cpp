#include "SelectedPlayers.h"

deque<Player*> SelectedPlayers::getM_players() {
	return this->m_players;
}

void SelectedPlayers::addPlayer(Player* player) {
	// TODO - implement SelectedPlayers::addPlayer
	throw "Not yet implemented";
}

void SelectedPlayers::removePlayer(Player* player) {
	// TODO - implement SelectedPlayers::removePlayer
	throw "Not yet implemented";
}

void SelectedPlayers::popFront() {
	// TODO - implement SelectedPlayers::popFront
	throw "Not yet implemented";
}

void SelectedPlayers::popAll() {
	// TODO - implement SelectedPlayers::popAll
	throw "Not yet implemented";
}

bool SelectedPlayers::hasPlayer(Player* player) {
	// TODO - implement SelectedPlayers::hasPlayer
	throw "Not yet implemented";
}

std::function<void ()> SelectedPlayers::getM_maxCallBack() {
	return this->m_maxCallBack;
}

void SelectedPlayers::setM_maxCallBack(std::function<void ()> m_maxCallBack) {
	this->m_maxCallBack = m_maxCallBack;
}

std::function<void ()> SelectedPlayers::getM_unmaxCallBack() {
	return this->m_unmaxCallBack;
}

void SelectedPlayers::setM_unmaxCallBack(std::function<void ()> m_unmaxCallBack) {
	this->m_unmaxCallBack = m_unmaxCallBack;
}
