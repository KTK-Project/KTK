#include "Event_RequestGoalPlayer.h"

vector<Player*> Event_RequestGoalPlayer::getM_candidate() {
	return this->m_candidate;
}

void Event_RequestGoalPlayer::setM_candidate(vector<Player*>& m_candidate) {
	// TODO - implement Event_RequestGoalPlayer::setM_candidate
	throw "Not yet implemented";
}

int Event_RequestGoalPlayer::getM_goalPlayerMaxQulitity() {
	return this->m_goalPlayerMaxQulitity;
}

void Event_RequestGoalPlayer::setM_goalPlayerMaxQulitity(int m_goalPlayerMaxQulitity) {
	this->m_goalPlayerMaxQulitity = m_goalPlayerMaxQulitity;
}

int Event_RequestGoalPlayer::getM_goalPlayerMinQulitity() {
	return this->m_goalPlayerMinQulitity;
}

void Event_RequestGoalPlayer::setM_goalPlayerMinQulitity(int m_goalPlayerMinQulitity) {
	this->m_goalPlayerMinQulitity = m_goalPlayerMinQulitity;
}

SelectedPlayers Event_RequestGoalPlayer::getM_receiver() {
	return this->m_receiver;
}

void Event_RequestGoalPlayer::setM_receiver(SelectedPlayers m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_RequestGoalPlayer::eventResolve() {
	// TODO - implement Event_RequestGoalPlayer::eventResolve
	throw "Not yet implemented";
}
