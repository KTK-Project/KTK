#include "Event_Hurt.h"

std::shared_ptr<Player> Event_Hurt::getM_attacker() {
	return this->m_attacker;
}

void Event_Hurt::setM_attacker(std::shared_ptr<Player> m_attacker) {
	this->m_attacker = m_attacker;
}

std::shared_ptr<Player> Event_Hurt::getM_goal() {
	return this->m_goal;
}

void Event_Hurt::setM_goal(std::shared_ptr<Player> m_goal) {
	this->m_goal = m_goal;
}

int Event_Hurt::getM_demage() {
	return this->m_demage;
}

void Event_Hurt::setM_demage(int m_demage) {
	this->m_demage = m_demage;
}

std::vector<std::shared_ptr<Card>> Event_Hurt::getM_cards() {
	return this->m_cards;
}

void Event_Hurt::setM_cards(std::vector<std::shared_ptr<Card>> m_cards) {
	this->m_cards = m_cards;
}

void Event_Hurt::eventResolve() {
	// TODO - implement Event_Hurt::eventResolve
	throw "Not yet implemented";
}
