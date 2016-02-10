#include "Event_Slash.h"

std::shared_ptr<Player> Event_Slash::getFirstPlayer() {
	return this->m_firstPlayer;
}

void Event_Slash::setFirstPlayer(std::shared_ptr<Player> m_firstPlayer) {
	this->m_firstPlayer = m_firstPlayer;
}

std::shared_ptr<Card> Event_Slash::getWeapon() {
	return this->m_weapon;
}

void Event_Slash::setWeapon(std::shared_ptr<Card> m_weapon) {
	this->m_weapon = m_weapon;
}

std::shared_ptr<Player> Event_Slash::getGoalPlayers() {
	return this->m_goalPlayers;
}

void Event_Slash::setGoalPlayers(std::shared_ptr<Player> m_goalPlayers) {
	this->m_goalPlayers = m_goalPlayers;
}

std::shared_ptr<Card> Event_Slash::getArmor() {
	return this->m_armor;
}

void Event_Slash::setArmor(std::shared_ptr<Card> m_armor) {
	this->m_armor = m_armor;
}

std::vector<std::shared_ptr<Card>> Event_Slash::getSlash() {
	return this->m_slash;
}

void Event_Slash::setSlash(std::vector<std::shared_ptr<Card>> m_slash) {
	this->m_slash = m_slash;
}

bool Event_Slash::getNeedToAskPlayer() {
	return this->m_needToAskPlayer;
}

void Event_Slash::setNeedToAskPlayer(bool m_needToAskPlayer) {
	this->m_needToAskPlayer = m_needToAskPlayer;
}

Slash_State Event_Slash::getSlashState() {
	return this->m_slashState;
}

void Event_Slash::setSlashState(Slash_State m_slashState) {
	this->m_slashState = m_slashState;
}

void Event_Slash::eventResolve() {
	// TODO - implement Event_Slash::eventResolve
	throw "Not yet implemented";
}

void Event_Slash::weaponCheckBeforeSlash() {
	// TODO - implement Event_Slash::weaponCheckBeforeSlash
	throw "Not yet implemented";
}

void Event_Slash::armorCheckBeforeSlash() {
	// TODO - implement Event_Slash::armorCheckBeforeSlash
	throw "Not yet implemented";
}

void Event_Slash::slashing() {
	// TODO - implement Event_Slash::slashing
	throw "Not yet implemented";
}

void Event_Slash::slashSuccess() {
	// TODO - implement Event_Slash::slashSuccess
	throw "Not yet implemented";
}

void Event_Slash::slashFail() {
	// TODO - implement Event_Slash::slashFail
	throw "Not yet implemented";
}

void Event_Slash::hurting() {
	// TODO - implement Event_Slash::hurting
	throw "Not yet implemented";
}

void Event_Slash::slashFinish() {
	// TODO - implement Event_Slash::slashFinish
	throw "Not yet implemented";
}
