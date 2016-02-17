#include "Event_GetCardFromHarvest.h"

std::vector<std::shared_ptr<Card>> Event_GetCardFromHarvest::getCards() const {
	return this->m_cards;
}

void Event_GetCardFromHarvest::setCards(const std::vector<std::shared_ptr<Card>> m_cards) const {
	throw "Not yet implemented";
}

std::vector<std::shared_ptr<Player>> Event_GetCardFromHarvest::getPlayers() const {
	return this->m_players;
}

void Event_GetCardFromHarvest::setPlayers(const std::vector<std::shared_ptr<Player>> m_players) const {
	throw "Not yet implemented";
}

std::shared_ptr<Card> Event_GetCardFromHarvest::getReceiver() const {
	return this->m_receiver;
}

void Event_GetCardFromHarvest::setReceiver(const std::shared_ptr<Card> m_receiver) const {
	throw "Not yet implemented";
}

void Event_GetCardFromHarvest::eventResolve() const {
	// TODO - implement Event_GetCardFromHarvest::eventResolve
	throw "Not yet implemented";
}
