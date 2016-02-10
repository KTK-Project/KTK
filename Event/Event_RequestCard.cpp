#include "Event_RequestCard.h"

bool Event_RequestCard::getHandCard() {
	return this->m_handCard;
}

void Event_RequestCard::setHandCard(bool m_handCard) {
	this->m_handCard = m_handCard;
}

Card_Name Event_RequestCard::getRequestHandCardName() {
	return this->m_requestHandCardName;
}

void Event_RequestCard::setRequestHandCardName(Card_Name m_requestHandCardName) {
	this->m_requestHandCardName = m_requestHandCardName;
}

int Event_RequestCard::getRequestHandCardQuantity() {
	return this->m_requestHandCardQuantity;
}

void Event_RequestCard::setRequestHandCardQuantity(int m_requestHandCardQuantity) {
	this->m_requestHandCardQuantity = m_requestHandCardQuantity;
}

bool Event_RequestCard::getWeapon() {
	return this->m_weapon;
}

void Event_RequestCard::setWeapon(bool m_weapon) {
	this->m_weapon = m_weapon;
}

bool Event_RequestCard::getArmor() {
	return this->m_armor;
}

void Event_RequestCard::setArmor(bool m_armor) {
	this->m_armor = m_armor;
}

bool Event_RequestCard::getOffensiveHorse() {
	return this->m_offensiveHorse;
}

void Event_RequestCard::setOffensiveHorse(bool m_offensiveHorse) {
	this->m_offensiveHorse = m_offensiveHorse;
}

bool Event_RequestCard::getDefensiveHorse() {
	return this->m_defensiveHorse;
}

void Event_RequestCard::setDefensiveHorse(bool m_defensiveHorse) {
	this->m_defensiveHorse = m_defensiveHorse;
}

SelectedCards Event_RequestCard::getReceiver() {
	return this->m_receiver;
}

void Event_RequestCard::setReceiver(SelectedCards m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_RequestCard::eventResolve() {
	// TODO - implement Event_RequestCard::eventResolve
	throw "Not yet implemented";
}
