#include "Event_GetCardFromHarvest.h"

vector<Card*> Event_GetCardFromHarvest::getM_cards() {
	return this->m_cards;
}

void Event_GetCardFromHarvest::setM_cards(vector<Card*> m_cards) {
	this->m_cards = m_cards;
}

vector<Player*> Event_GetCardFromHarvest::getM_players() {
	return this->m_players;
}

void Event_GetCardFromHarvest::setM_players(vector<Player*> m_players) {
	this->m_players = m_players;
}

Card* Event_GetCardFromHarvest::getM_receiver() {
	return this->m_receiver;
}

void Event_GetCardFromHarvest::setM_receiver(Card* m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_GetCardFromHarvest::eventResolve() {
	// TODO - implement Event_GetCardFromHarvest::eventResolve
	throw "Not yet implemented";
}
