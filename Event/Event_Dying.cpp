#include "Event_Dying.h"

std::shared_ptr<Player> Event_Dying::getFirstPlayer() {
	return this->m_firstPlayer;
}

void Event_Dying::setFirstPlayer(std::shared_ptr<Player> m_firstPlayer) {
	this->m_firstPlayer = m_firstPlayer;
}

std::shared_ptr<Player> Event_Dying::getDyingPlayer() {
	return this->m_DyingPlayer;
}

void Event_Dying::setDyingPlayer(std::shared_ptr<Player> m_DyingPlayer) {
	this->m_DyingPlayer = m_DyingPlayer;
}

void Event_Dying::eventResolve() {
	// TODO - implement Event_Dying::eventResolve
	throw "Not yet implemented";
}
