#include "Event_DelayedStrategy.h"

Event_DelayedStrategy::Event_DelayedStrategy() {
	// TODO - implement Event_DelayedStrategy::Event_DelayedStrategy
	throw "Not yet implemented";
}

std::shared_ptr<Player> Event_DelayedStrategy::getOwnerPlayer() const {
	return m_ownerPlayer.lock();
}

void Event_DelayedStrategy::setOwnerPlayer(const std::shared_ptr<Player> & ownerPlayer) {
	m_ownerPlayer = ownerPlayer;
}
