#include "Event_FlawlessDefense.h"

Player* Event_FlawlessDefense::getM_firstPlayer() {
	return this->m_firstPlayer;
}

void Event_FlawlessDefense::setM_firstPlayer(Player* m_firstPlayer) {
	this->m_firstPlayer = m_firstPlayer;
}

bool Event_FlawlessDefense::getM_success() {
	return this->m_success;
}

void Event_FlawlessDefense::setM_success(bool m_success) {
	this->m_success = m_success;
}

void Event_FlawlessDefense::eventResolve() {
	// TODO - implement Event_FlawlessDefense::eventResolve
	throw "Not yet implemented";
}
