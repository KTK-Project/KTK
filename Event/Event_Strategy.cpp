#include "Event_Strategy.h"

std::shared_ptr<Player> Event_Strategy::getM_playCardPlayer() {
	return this->m_playCardPlayer;
}

void Event_Strategy::setM_playCardPlayer(std::shared_ptr<Player> m_playCardPlayer) {
	this->m_playCardPlayer = m_playCardPlayer;
}
