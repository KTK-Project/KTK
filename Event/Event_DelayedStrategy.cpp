#include "Event_DelayedStrategy.h"

Event_DelayedStrategy::Event_DelayedStrategy() {
	// TODO - implement Event_DelayedStrategy::Event_DelayedStrategy
	throw "Not yet implemented";
}

std::shared_ptr<Player> Event_DelayedStrategy::getOwnerPlayer() {
	return this->m_ownerPlayer;
}

void Event_DelayedStrategy::setOwnerPlayer(std::shared_ptr<Player> m_ownerPlayer) {
	this->m_ownerPlayer = m_ownerPlayer;
}
