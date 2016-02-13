#include "Event_Hurt.h"

std::shared_ptr<Player> Event_Hurt::getAttacker() const {
	return this->m_attacker;
}

void Event_Hurt::setAttacker(const std::shared_ptr<Player> m_attacker) const {
	this->m_attacker = m_attacker;
}

std::shared_ptr<Player> Event_Hurt::getGoal() const {
	return this->m_goal;
}

void Event_Hurt::setGoal(const std::shared_ptr<Player> m_goal) const {
	this->m_goal = m_goal;
}

int Event_Hurt::getDemage() const {
	return this->m_demage;
}

void Event_Hurt::setDemage(const int m_demage) const {
	this->m_demage = m_demage;
}

std::vector<std::shared_ptr<Card>> Event_Hurt::getCards() const {
	return this->m_cards;
}

void Event_Hurt::setCards(const std::vector<std::shared_ptr<Card>> m_cards) const {
	this->m_cards = m_cards;
}

void Event_Hurt::eventResolve() const {
	// TODO - implement Event_Hurt::eventResolve
	throw "Not yet implemented";
}
