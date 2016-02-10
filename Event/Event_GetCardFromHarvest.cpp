#include "Event_GetCardFromHarvest.h"

std::vector<std::shared_ptr<Card>> Event_GetCardFromHarvest::getCards() {
	return this->m_cards;
}

void Event_GetCardFromHarvest::setCards(std::vector<std::shared_ptr<Card>> m_cards) {
	this->m_cards = m_cards;
}

std::vector<std::shared_ptr<Player>> Event_GetCardFromHarvest::getPlayers() {
	return this->m_players;
}

void Event_GetCardFromHarvest::setPlayers(std::vector<std::shared_ptr<Player>> m_players) {
	this->m_players = m_players;
}

std::shared_ptr<Card> Event_GetCardFromHarvest::getReceiver() {
	return this->m_receiver;
}

void Event_GetCardFromHarvest::setReceiver(std::shared_ptr<Card> m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_GetCardFromHarvest::eventResolve() {
	// TODO - implement Event_GetCardFromHarvest::eventResolve
	throw "Not yet implemented";
}
