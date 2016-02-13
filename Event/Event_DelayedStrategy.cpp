#include "Event_DelayedStrategy.h"

Event_DelayedStrategy::Event_DelayedStrategy() const {
	// TODO - implement Event_DelayedStrategy::Event_DelayedStrategy
	throw "Not yet implemented";
}

std::shared_ptr<Player> Event_DelayedStrategy::getOwnerPlayer() const {
	return this->m_ownerPlayer;
}

void Event_DelayedStrategy::setOwnerPlayer(const std::shared_ptr<Player> m_ownerPlayer) const {
	this->m_ownerPlayer = m_ownerPlayer;
}
