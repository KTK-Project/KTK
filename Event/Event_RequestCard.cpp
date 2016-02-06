#include "Event_RequestCard.h"

bool Event_RequestCard::getM_handCard() {
	return this->m_handCard;
}

void Event_RequestCard::setM_handCard(bool m_handCard) {
	this->m_handCard = m_handCard;
}

Card_Name Event_RequestCard::getM_requestHandCardName() {
	return this->m_requestHandCardName;
}

void Event_RequestCard::setM_requestHandCardName(Card_Name m_requestHandCardName) {
	this->m_requestHandCardName = m_requestHandCardName;
}

int Event_RequestCard::getM_requestHandCardQuantity() {
	return this->m_requestHandCardQuantity;
}

void Event_RequestCard::setM_requestHandCardQuantity(int m_requestHandCardQuantity) {
	this->m_requestHandCardQuantity = m_requestHandCardQuantity;
}

bool Event_RequestCard::getM_weapon() {
	return this->m_weapon;
}

void Event_RequestCard::setM_weapon(bool m_weapon) {
	this->m_weapon = m_weapon;
}

bool Event_RequestCard::getM_armor() {
	return this->m_armor;
}

void Event_RequestCard::setM_armor(bool m_armor) {
	this->m_armor = m_armor;
}

bool Event_RequestCard::getM_offensiveHorse() {
	return this->m_offensiveHorse;
}

void Event_RequestCard::setM_offensiveHorse(bool m_offensiveHorse) {
	this->m_offensiveHorse = m_offensiveHorse;
}

bool Event_RequestCard::getM_defensiveHorse() {
	return this->m_defensiveHorse;
}

void Event_RequestCard::setM_defensiveHorse(bool m_defensiveHorse) {
	this->m_defensiveHorse = m_defensiveHorse;
}

SelectedCards Event_RequestCard::getM_receiver() {
	return this->m_receiver;
}

void Event_RequestCard::setM_receiver(SelectedCards m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_RequestCard::eventResolve() {
	// TODO - implement Event_RequestCard::eventResolve
	throw "Not yet implemented";
}
