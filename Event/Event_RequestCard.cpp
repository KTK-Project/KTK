#include "Event_RequestCard.h"

bool Event_RequestCard::getHandCard() const {
	throw "Not yet implemented";
}

void Event_RequestCard::setHandCard(const bool m_handCard) const {
	throw "Not yet implemented";
}

ECardName Event_RequestCard::getRequestHandCardName() const {
	throw "Not yet implemented";
}

void Event_RequestCard::setRequestHandCardName(const ECardName m_requestHandCardName) const {
	throw "Not yet implemented";
}

int Event_RequestCard::getRequestHandCardQuantity() const {
	throw "Not yet implemented";
}

void Event_RequestCard::setRequestHandCardQuantity(const int m_requestHandCardQuantity) const {
	throw "Not yet implemented";
}

bool Event_RequestCard::getWeapon() const {
	throw "Not yet implemented";
}

void Event_RequestCard::setWeapon(const bool m_weapon) const {
	throw "Not yet implemented";
}

bool Event_RequestCard::getArmor() const {
	throw "Not yet implemented";
}

void Event_RequestCard::setArmor(const bool m_armor) const {
	throw "Not yet implemented";
}

bool Event_RequestCard::getOffensiveHorse() const {
	return this->m_offensiveHorse;
}

void Event_RequestCard::setOffensiveHorse(const bool m_offensiveHorse) const {
	throw "Not yet implemented";
}

bool Event_RequestCard::getDefensiveHorse() const {
	return this->m_defensiveHorse;
}

void Event_RequestCard::setDefensiveHorse(const bool m_defensiveHorse) const {
	throw "Not yet implemented";
}

SelectedCards Event_RequestCard::getReceiver() const {
	return this->m_receiver;
}

void Event_RequestCard::setReceiver(const SelectedCards m_receiver) const {
	throw "Not yet implemented";
}

void Event_RequestCard::eventResolve() const {
	// TODO - implement Event_RequestCard::eventResolve
	throw "Not yet implemented";
}
