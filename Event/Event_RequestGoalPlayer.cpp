#include "Event_RequestGoalPlayer.h"

std::vector<std::shared_ptr<Player>> Event_RequestGoalPlayer::getCandidate() {
	return m_candidate;
}

int Event_RequestGoalPlayer::getGoalPlayerMaxQulitity() const {
	return m_goalPlayerMaxQulitity;
}

void Event_RequestGoalPlayer::setGoalPlayerMaxQulitity(int goalPlayerMaxQulitity) {
	m_goalPlayerMaxQulitity = goalPlayerMaxQulitity;
}

int Event_RequestGoalPlayer::getGoalPlayerMinQulitity() const {
	return m_goalPlayerMinQulitity;
}

void Event_RequestGoalPlayer::setGoalPlayerMinQulitity(int goalPlayerMinQulitity) {
	m_goalPlayerMinQulitity = goalPlayerMinQulitity;
}

SelectedPlayers & Event_RequestGoalPlayer::getReceiver() {
	return m_receiver;
}

void Event_RequestGoalPlayer::eventResolve() const {
	// TODO - implement Event_RequestGoalPlayer::eventResolve
	throw "Not yet implemented";
}
