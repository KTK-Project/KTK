#include "Event_RequestPlayerCard.h"

std::shared_ptr<Player> Event_RequestPlayerCard::getPlayer() const {
	return this->m_player;
}

void Event_RequestPlayerCard::setPlayer(const std::shared_ptr<Player> m_player) const {
	this->m_player = m_player;
}

bool Event_RequestPlayerCard::getHandCard() const {
	return this->m_handCard;
}

void Event_RequestPlayerCard::setHandCard(const bool m_handCard) const {
	this->m_handCard = m_handCard;
}

bool Event_RequestPlayerCard::getLightning() const {
	return this->m_lightning;
}

void Event_RequestPlayerCard::setLightning(const bool m_lightning) const {
	this->m_lightning = m_lightning;
}

bool Event_RequestPlayerCard::getDrownInHappiness() const {
	return this->m_drownInHappiness;
}

void Event_RequestPlayerCard::setDrownInHappiness(const bool m_drownInHappiness) const {
	this->m_drownInHappiness = m_drownInHappiness;
}

bool Event_RequestPlayerCard::getFamish() const {
	return this->m_famish;
}

void Event_RequestPlayerCard::setFamish(const bool m_famish) const {
	this->m_famish = m_famish;
}

bool Event_RequestPlayerCard::getWeapon() const {
	return this->m_weapon;
}

void Event_RequestPlayerCard::setWeapon(const bool m_weapon) const {
	this->m_weapon = m_weapon;
}

bool Event_RequestPlayerCard::getArmor() const {
	return this->m_armor;
}

void Event_RequestPlayerCard::setArmor(const bool m_armor) const {
	this->m_armor = m_armor;
}

bool Event_RequestPlayerCard::getOffensiveHorse() const {
	return this->m_offensiveHorse;
}

void Event_RequestPlayerCard::setOffensiveHorse(const bool m_offensiveHorse) const {
	this->m_offensiveHorse = m_offensiveHorse;
}

bool Event_RequestPlayerCard::getDefensiveHorse() const {
	return this->m_defensiveHorse;
}

void Event_RequestPlayerCard::setDefensiveHorse(const bool m_defensiveHorse) const {
	this->m_defensiveHorse = m_defensiveHorse;
}

std::shared_ptr<Card> Event_RequestPlayerCard::getReceiver() const {
	return this->m_receiver;
}

void Event_RequestPlayerCard::setReceiver(const std::shared_ptr<Card> m_receiver) const {
	this->m_receiver = m_receiver;
}

void Event_RequestPlayerCard::eventResolve() const {
	// TODO - implement Event_RequestPlayerCard::eventResolve
	throw "Not yet implemented";
}
