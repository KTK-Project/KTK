#include "Event_GetCardFromHarvest.h"

std::vector<std::shared_ptr<Card>> & Event_GetCardFromHarvest::getCards() {
	return m_cards;
}

std::vector<std::shared_ptr<Player>> & Event_GetCardFromHarvest::getPlayers() {
	return m_players;
}

const std::shared_ptr<Card> & Event_GetCardFromHarvest::getReceiver() const {
	return m_receiver;
}

void Event_GetCardFromHarvest::setReceiver(const std::shared_ptr<Card> & receiver) {
	m_receiver = receiver;
}

void Event_GetCardFromHarvest::eventResolve() const {
	// TODO - implement Event_GetCardFromHarvest::eventResolve
	throw "Not yet implemented";
}
