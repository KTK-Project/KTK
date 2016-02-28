#include "Event_RequestPlayerCard.h"

const std::shared_ptr<Player> & Event_RequestPlayerCard::getPlayer() const {
	return m_player;
}

void Event_RequestPlayerCard::setPlayer(const std::shared_ptr<Player> & player) {
	m_player = player;
}

bool Event_RequestPlayerCard::getHandCard() const {
	return m_handCard;
}

void Event_RequestPlayerCard::setHandCard(bool handCard) {
	m_handCard = handCard;
}

bool Event_RequestPlayerCard::getLightning() const {
	return m_lightning;
}

void Event_RequestPlayerCard::setLightning(bool lightning) {
	m_lightning = lightning;
}

bool Event_RequestPlayerCard::getDrownInHappiness() const {
	return m_drownInHappiness;
}

void Event_RequestPlayerCard::setDrownInHappiness(bool drownInHappiness) {
	m_drownInHappiness = drownInHappiness;
}

bool Event_RequestPlayerCard::getFamish() const {
	return m_famish;
}

void Event_RequestPlayerCard::setFamish(bool famish) {
	m_famish = famish;
}

bool Event_RequestPlayerCard::getWeapon() const {
	return m_weapon;
}

void Event_RequestPlayerCard::setWeapon(bool weapon) {
	m_weapon = weapon;
}

bool Event_RequestPlayerCard::getArmor() const {
	return m_armor;
}

void Event_RequestPlayerCard::setArmor(bool armor) {
	m_armor = armor;
}

bool Event_RequestPlayerCard::getOffensiveHorse() const {
	return m_offensiveHorse;
}

void Event_RequestPlayerCard::setOffensiveHorse(bool offensiveHorse) {
	m_offensiveHorse = offensiveHorse;
}

bool Event_RequestPlayerCard::getDefensiveHorse() const {
	return m_defensiveHorse;
}

void Event_RequestPlayerCard::setDefensiveHorse(bool defensiveHorse) {
	m_defensiveHorse = defensiveHorse;
}

const std::shared_ptr<Card> & Event_RequestPlayerCard::getReceiver() const {
	return m_receiver;
}

void Event_RequestPlayerCard::setReceiver(const std::shared_ptr<Card> & receiver) {
	m_receiver = receiver;
}

void Event_RequestPlayerCard::eventResolve() const {
	// TODO - implement Event_RequestPlayerCard::eventResolve
	throw "Not yet implemented";
}
