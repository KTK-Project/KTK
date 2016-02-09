#include "Event_RequestPlayerCard.h"

std::shared_ptr<Player> Event_RequestPlayerCard::getM_player() {
	return this->m_player;
}

void Event_RequestPlayerCard::setM_player(std::shared_ptr<Player> m_player) {
	this->m_player = m_player;
}

bool Event_RequestPlayerCard::getM_handCard() {
	return this->m_handCard;
}

void Event_RequestPlayerCard::setM_handCard(bool m_handCard) {
	this->m_handCard = m_handCard;
}

bool Event_RequestPlayerCard::getM_lightning() {
	return this->m_lightning;
}

void Event_RequestPlayerCard::setM_lightning(bool m_lightning) {
	this->m_lightning = m_lightning;
}

bool Event_RequestPlayerCard::getM_drownInHappiness() {
	return this->m_drownInHappiness;
}

void Event_RequestPlayerCard::setM_drownInHappiness(bool m_drownInHappiness) {
	this->m_drownInHappiness = m_drownInHappiness;
}

bool Event_RequestPlayerCard::getM_famish() {
	return this->m_famish;
}

void Event_RequestPlayerCard::setM_famish(bool m_famish) {
	this->m_famish = m_famish;
}

bool Event_RequestPlayerCard::getM_weapon() {
	return this->m_weapon;
}

void Event_RequestPlayerCard::setM_weapon(bool m_weapon) {
	this->m_weapon = m_weapon;
}

bool Event_RequestPlayerCard::getM_armor() {
	return this->m_armor;
}

void Event_RequestPlayerCard::setM_armor(bool m_armor) {
	this->m_armor = m_armor;
}

bool Event_RequestPlayerCard::getM_offensiveHorse() {
	return this->m_offensiveHorse;
}

void Event_RequestPlayerCard::setM_offensiveHorse(bool m_offensiveHorse) {
	this->m_offensiveHorse = m_offensiveHorse;
}

bool Event_RequestPlayerCard::getM_defensiveHorse() {
	return this->m_defensiveHorse;
}

void Event_RequestPlayerCard::setM_defensiveHorse(bool m_defensiveHorse) {
	this->m_defensiveHorse = m_defensiveHorse;
}

std::shared_ptr<Card> Event_RequestPlayerCard::getM_receiver() {
	return this->m_receiver;
}

void Event_RequestPlayerCard::setM_receiver(std::shared_ptr<Card> m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_RequestPlayerCard::eventResolve() {
	// TODO - implement Event_RequestPlayerCard::eventResolve
	throw "Not yet implemented";
}
