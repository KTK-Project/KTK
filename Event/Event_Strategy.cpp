#include "Event_Strategy.h"

std::shared_ptr<Player> Event_Strategy::getPlayCardPlayer() const {
	return this->m_playCardPlayer;
}

void Event_Strategy::setPlayCardPlayer(const std::shared_ptr<Player> m_playCardPlayer) const {
	throw "Not yet implemented";
}
