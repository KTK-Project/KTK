#include "Event_Slash.h"

Player* Event_Slash::getM_firstPlayer() {
	return this->m_firstPlayer;
}

void Event_Slash::setM_firstPlayer(Player* m_firstPlayer) {
	this->m_firstPlayer = m_firstPlayer;
}

Card* Event_Slash::getM_weapon() {
	return this->m_weapon;
}

void Event_Slash::setM_weapon(Card* m_weapon) {
	this->m_weapon = m_weapon;
}

Player* Event_Slash::getM_goalPlayers() {
	return this->m_goalPlayers;
}

void Event_Slash::setM_goalPlayers(Player* m_goalPlayers) {
	this->m_goalPlayers = m_goalPlayers;
}

Card * Event_Slash::getM_armor() {
	return this->m_armor;
}

void Event_Slash::setM_armor(Card * m_armor) {
	this->m_armor = m_armor;
}

vector<Card*> Event_Slash::getM_slash() {
	return this->m_slash;
}

void Event_Slash::setM_slash(vector<Card*> m_slash) {
	this->m_slash = m_slash;
}

bool Event_Slash::getM_needToAskPlayer() {
	return this->m_needToAskPlayer;
}

void Event_Slash::setM_needToAskPlayer(bool m_needToAskPlayer) {
	this->m_needToAskPlayer = m_needToAskPlayer;
}

Slash_State Event_Slash::getM_slashState() {
	return this->m_slashState;
}

void Event_Slash::setM_slashState(Slash_State m_slashState) {
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
