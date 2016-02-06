#include "Event_Dying.h"

Player* Event_Dying::getM_firstPlayer() {
	return this->m_firstPlayer;
}

void Event_Dying::setM_firstPlayer(Player* m_firstPlayer) {
	this->m_firstPlayer = m_firstPlayer;
}

Player* Event_Dying::getM_DyingPlayer() {
	return this->m_DyingPlayer;
}

void Event_Dying::setM_DyingPlayer(Player* m_DyingPlayer) {
	this->m_DyingPlayer = m_DyingPlayer;
}

void Event_Dying::eventResolve() {
	// TODO - implement Event_Dying::eventResolve
	throw "Not yet implemented";
}
