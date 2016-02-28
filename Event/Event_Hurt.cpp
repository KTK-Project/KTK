#include "Event_Hurt.h"

const std::shared_ptr<Player> & Event_Hurt::getAttacker() const {
	return m_attacker;
}

void Event_Hurt::setAttacker(const std::shared_ptr<Player> & attacker) {
	m_attacker = attacker;
}

const std::shared_ptr<Player> & Event_Hurt::getGoal() const {
	return m_goal;
}

void Event_Hurt::setGoal(const std::shared_ptr<Player> & goal) {
	m_goal = goal;
}

int Event_Hurt::getDemage() const {
	return m_demage;
}

void Event_Hurt::setDemage(int demage) {
	m_demage = demage;
}

std::vector<std::shared_ptr<Card>> & Event_Hurt::getCards() {
	return m_cards;
}

void Event_Hurt::eventResolve() const {
	// TODO - implement Event_Hurt::eventResolve
	throw "Not yet implemented";
}
