#include "Event_RequestPlayerCard.h"

std::shared_ptr<Player> Event_RequestPlayerCard::getPlayer() const {
	return this->m_player;
}

void Event_RequestPlayerCard::setPlayer(const std::shared_ptr<Player> m_player) const {
	throw "Not yet implemented";
}

bool Event_RequestPlayerCard::getHandCard() const {
	return this->m_handCard;
}

void Event_RequestPlayerCard::setHandCard(const bool m_handCard) const {
	throw "Not yet implemented";
}

bool Event_RequestPlayerCard::getLightning() const {
	return this->m_lightning;
}

void Event_RequestPlayerCard::setLightning(const bool m_lightning) const {
	throw "Not yet implemented";
}

bool Event_RequestPlayerCard::getDrownInHappiness() const {
	return this->m_drownInHappiness;
}

void Event_RequestPlayerCard::setDrownInHappiness(const bool m_drownInHappiness) const {
	throw "Not yet implemented";
}

bool Event_RequestPlayerCard::getFamish() const {
	return this->m_famish;
}

void Event_RequestPlayerCard::setFamish(const bool m_famish) const {
	throw "Not yet implemented";
}

bool Event_RequestPlayerCard::getWeapon() const {
	return this->m_weapon;
}

void Event_RequestPlayerCard::setWeapon(const bool m_weapon) const {
	throw "Not yet implemented";
}

bool Event_RequestPlayerCard::getArmor() const {
	return this->m_armor;
}

void Event_RequestPlayerCard::setArmor(const bool m_armor) const {
	throw "Not yet implemented";
}

bool Event_RequestPlayerCard::getOffensiveHorse() const {
	return this->m_offensiveHorse;
}

void Event_RequestPlayerCard::setOffensiveHorse(const bool m_offensiveHorse) const {
	throw "Not yet implemented";
}

bool Event_RequestPlayerCard::getDefensiveHorse() const {
	return this->m_defensiveHorse;
}

void Event_RequestPlayerCard::setDefensiveHorse(const bool m_defensiveHorse) const {
	throw "Not yet implemented";
}

std::shared_ptr<Card> Event_RequestPlayerCard::getReceiver() const {
	return this->m_receiver;
}

void Event_RequestPlayerCard::setReceiver(const std::shared_ptr<Card> m_receiver) const {
	throw "Not yet implemented";
}

void Event_RequestPlayerCard::eventResolve() const {
	// TODO - implement Event_RequestPlayerCard::eventResolve
	throw "Not yet implemented";
}
