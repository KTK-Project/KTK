#include "Event_Strategy.h"

std::shared_ptr<Player> Event_Strategy::getPlayCardPlayer() {
	return this->m_playCardPlayer;
}

void Event_Strategy::setPlayCardPlayer(std::shared_ptr<Player> m_playCardPlayer) {
	this->m_playCardPlayer = m_playCardPlayer;
}
