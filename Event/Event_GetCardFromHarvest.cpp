#include "Event_GetCardFromHarvest.h"

std::vector<std::shared_ptr<Card>> Event_GetCardFromHarvest::getM_cards() {
	return this->m_cards;
}

void Event_GetCardFromHarvest::setM_cards(std::vector<std::shared_ptr<Card>> m_cards) {
	this->m_cards = m_cards;
}

std::vector<std::shared_ptr<Player>> Event_GetCardFromHarvest::getM_players() {
	return this->m_players;
}

void Event_GetCardFromHarvest::setM_players(std::vector<std::shared_ptr<Player>> m_players) {
	this->m_players = m_players;
}

std::shared_ptr<Card> Event_GetCardFromHarvest::getM_receiver() {
	return this->m_receiver;
}

void Event_GetCardFromHarvest::setM_receiver(std::shared_ptr<Card> m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_GetCardFromHarvest::eventResolve() {
	// TODO - implement Event_GetCardFromHarvest::eventResolve
	throw "Not yet implemented";
}
