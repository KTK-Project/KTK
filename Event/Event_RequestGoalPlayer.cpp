#include "Event_RequestGoalPlayer.h"

std::vector<std::shared_ptr<Player>> Event_RequestGoalPlayer::getCandidate() {
	return this->m_candidate;
}

void Event_RequestGoalPlayer::setCandidate(std::vector<std::shared_ptr<Player>>& m_candidate) {
	// TODO - implement Event_RequestGoalPlayer::setCandidate
	throw "Not yet implemented";
}

int Event_RequestGoalPlayer::getGoalPlayerMaxQulitity() {
	return this->m_goalPlayerMaxQulitity;
}

void Event_RequestGoalPlayer::setGoalPlayerMaxQulitity(int m_goalPlayerMaxQulitity) {
	this->m_goalPlayerMaxQulitity = m_goalPlayerMaxQulitity;
}

int Event_RequestGoalPlayer::getGoalPlayerMinQulitity() {
	return this->m_goalPlayerMinQulitity;
}

void Event_RequestGoalPlayer::setGoalPlayerMinQulitity(int m_goalPlayerMinQulitity) {
	this->m_goalPlayerMinQulitity = m_goalPlayerMinQulitity;
}

SelectedPlayers Event_RequestGoalPlayer::getReceiver() {
	return this->m_receiver;
}

void Event_RequestGoalPlayer::setReceiver(SelectedPlayers m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_RequestGoalPlayer::eventResolve() {
	// TODO - implement Event_RequestGoalPlayer::eventResolve
	throw "Not yet implemented";
}
