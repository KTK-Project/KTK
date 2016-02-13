#include "Event_GetCardFromHarvest.h"

std::vector<std::shared_ptr<Card>> Event_GetCardFromHarvest::getCards() const {
	return this->m_cards;
}

void Event_GetCardFromHarvest::setCards(const std::vector<std::shared_ptr<Card>> m_cards) const {
	this->m_cards = m_cards;
}

std::vector<std::shared_ptr<Player>> Event_GetCardFromHarvest::getPlayers() const {
	return this->m_players;
}

void Event_GetCardFromHarvest::setPlayers(const std::vector<std::shared_ptr<Player>> m_players) const {
	this->m_players = m_players;
}

std::shared_ptr<Card> Event_GetCardFromHarvest::getReceiver() const {
	return this->m_receiver;
}

void Event_GetCardFromHarvest::setReceiver(const std::shared_ptr<Card> m_receiver) const {
	this->m_receiver = m_receiver;
}

void Event_GetCardFromHarvest::eventResolve() const {
	// TODO - implement Event_GetCardFromHarvest::eventResolve
	throw "Not yet implemented";
}
