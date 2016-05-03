#include "Event_Strategy.h"

std::shared_ptr<Player> Event_Strategy::getPlayCardPlayer() const {
	return m_playCardPlayer.lock();
}

void Event_Strategy::setPlayCardPlayer(const std::shared_ptr<Player> & playCardPlayer) {
	m_playCardPlayer = playCardPlayer;
}
