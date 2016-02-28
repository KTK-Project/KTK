#include "Event_RequestCard.h"

bool Event_RequestCard::getHandCard() const {
	return m_handCard;
}

void Event_RequestCard::setHandCard(bool handCard) {
	m_handCard = handCard;
}

ECardName Event_RequestCard::getRequestHandCardName() const {
	return m_requestHandCardName;
}

void Event_RequestCard::setRequestHandCardName(ECardName requestHandCardName) {
	m_requestHandCardName = requestHandCardName;
}

int Event_RequestCard::getRequestHandCardQuantity() const {
	return m_requestHandCardQuantity;
}

void Event_RequestCard::setRequestHandCardQuantity(int requestHandCardQuantity) {
	m_requestHandCardQuantity = requestHandCardQuantity;
}

bool Event_RequestCard::getWeapon() const {
	return m_weapon;
}

void Event_RequestCard::setWeapon(bool weapon) {
	m_weapon = weapon;
}

bool Event_RequestCard::getArmor() const {
	return m_armor;
}

void Event_RequestCard::setArmor(bool armor) {
	m_armor = armor;
}

bool Event_RequestCard::getOffensiveHorse() const {
	return m_offensiveHorse;
}

void Event_RequestCard::setOffensiveHorse(bool offensiveHorse) {
	m_offensiveHorse = offensiveHorse;
}

bool Event_RequestCard::getDefensiveHorse() const {
	return m_defensiveHorse;
}

void Event_RequestCard::setDefensiveHorse(bool defensiveHorse) {
	m_defensiveHorse = defensiveHorse;
}

SelectedCards & Event_RequestCard::getReceiver() {
	return m_receiver;
}

void Event_RequestCard::eventResolve() const {
	// TODO - implement Event_RequestCard::eventResolve
	throw "Not yet implemented";
}
