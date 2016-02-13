#include "Event_RequestCard.h"

bool Event_RequestCard::getHandCard() const {
	return this->m_handCard;
}

void Event_RequestCard::setHandCard(const bool m_handCard) const {
	this->m_handCard = m_handCard;
}

Card_Name Event_RequestCard::getRequestHandCardName() const {
	return this->m_requestHandCardName;
}

void Event_RequestCard::setRequestHandCardName(const Card_Name m_requestHandCardName) const {
	this->m_requestHandCardName = m_requestHandCardName;
}

int Event_RequestCard::getRequestHandCardQuantity() const {
	return this->m_requestHandCardQuantity;
}

void Event_RequestCard::setRequestHandCardQuantity(const int m_requestHandCardQuantity) const {
	this->m_requestHandCardQuantity = m_requestHandCardQuantity;
}

bool Event_RequestCard::getWeapon() const {
	return this->m_weapon;
}

void Event_RequestCard::setWeapon(const bool m_weapon) const {
	this->m_weapon = m_weapon;
}

bool Event_RequestCard::getArmor() const {
	return this->m_armor;
}

void Event_RequestCard::setArmor(const bool m_armor) const {
	this->m_armor = m_armor;
}

bool Event_RequestCard::getOffensiveHorse() const {
	return this->m_offensiveHorse;
}

void Event_RequestCard::setOffensiveHorse(const bool m_offensiveHorse) const {
	this->m_offensiveHorse = m_offensiveHorse;
}

bool Event_RequestCard::getDefensiveHorse() const {
	return this->m_defensiveHorse;
}

void Event_RequestCard::setDefensiveHorse(const bool m_defensiveHorse) const {
	this->m_defensiveHorse = m_defensiveHorse;
}

SelectedCards Event_RequestCard::getReceiver() const {
	return this->m_receiver;
}

void Event_RequestCard::setReceiver(const SelectedCards m_receiver) const {
	this->m_receiver = m_receiver;
}

void Event_RequestCard::eventResolve() const {
	// TODO - implement Event_RequestCard::eventResolve
	throw "Not yet implemented";
}
