#include "Event_RequestGoalPlayer.h"

std::vector<std::shared_ptr<Player>> Event_RequestGoalPlayer::getCandidate() const {
	return this->m_candidate;
}

void Event_RequestGoalPlayer::setCandidate(const std::vector<std::shared_ptr<Player>>& m_candidate) const {
	// TODO - implement Event_RequestGoalPlayer::setCandidate
	throw "Not yet implemented";
}

int Event_RequestGoalPlayer::getGoalPlayerMaxQulitity() const {
	return this->m_goalPlayerMaxQulitity;
}

void Event_RequestGoalPlayer::setGoalPlayerMaxQulitity(const int m_goalPlayerMaxQulitity) const {
	this->m_goalPlayerMaxQulitity = m_goalPlayerMaxQulitity;
}

int Event_RequestGoalPlayer::getGoalPlayerMinQulitity() const {
	return this->m_goalPlayerMinQulitity;
}

void Event_RequestGoalPlayer::setGoalPlayerMinQulitity(const int m_goalPlayerMinQulitity) const {
	this->m_goalPlayerMinQulitity = m_goalPlayerMinQulitity;
}

SelectedPlayers Event_RequestGoalPlayer::getReceiver() const {
	return this->m_receiver;
}

void Event_RequestGoalPlayer::setReceiver(const SelectedPlayers m_receiver) const {
	this->m_receiver = m_receiver;
}

void Event_RequestGoalPlayer::eventResolve() const {
	// TODO - implement Event_RequestGoalPlayer::eventResolve
	throw "Not yet implemented";
}
