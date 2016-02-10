#include "Event_RequestPlayerCard.h"

std::shared_ptr<Player> Event_RequestPlayerCard::getPlayer() {
	return this->m_player;
}

void Event_RequestPlayerCard::setPlayer(std::shared_ptr<Player> m_player) {
	this->m_player = m_player;
}

bool Event_RequestPlayerCard::getHandCard() {
	return this->m_handCard;
}

void Event_RequestPlayerCard::setHandCard(bool m_handCard) {
	this->m_handCard = m_handCard;
}

bool Event_RequestPlayerCard::getLightning() {
	return this->m_lightning;
}

void Event_RequestPlayerCard::setLightning(bool m_lightning) {
	this->m_lightning = m_lightning;
}

bool Event_RequestPlayerCard::getDrownInHappiness() {
	return this->m_drownInHappiness;
}

void Event_RequestPlayerCard::setDrownInHappiness(bool m_drownInHappiness) {
	this->m_drownInHappiness = m_drownInHappiness;
}

bool Event_RequestPlayerCard::getFamish() {
	return this->m_famish;
}

void Event_RequestPlayerCard::setFamish(bool m_famish) {
	this->m_famish = m_famish;
}

bool Event_RequestPlayerCard::getWeapon() {
	return this->m_weapon;
}

void Event_RequestPlayerCard::setWeapon(bool m_weapon) {
	this->m_weapon = m_weapon;
}

bool Event_RequestPlayerCard::getArmor() {
	return this->m_armor;
}

void Event_RequestPlayerCard::setArmor(bool m_armor) {
	this->m_armor = m_armor;
}

bool Event_RequestPlayerCard::getOffensiveHorse() {
	return this->m_offensiveHorse;
}

void Event_RequestPlayerCard::setOffensiveHorse(bool m_offensiveHorse) {
	this->m_offensiveHorse = m_offensiveHorse;
}

bool Event_RequestPlayerCard::getDefensiveHorse() {
	return this->m_defensiveHorse;
}

void Event_RequestPlayerCard::setDefensiveHorse(bool m_defensiveHorse) {
	this->m_defensiveHorse = m_defensiveHorse;
}

std::shared_ptr<Card> Event_RequestPlayerCard::getReceiver() {
	return this->m_receiver;
}

void Event_RequestPlayerCard::setReceiver(std::shared_ptr<Card> m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_RequestPlayerCard::eventResolve() {
	// TODO - implement Event_RequestPlayerCard::eventResolve
	throw "Not yet implemented";
}
