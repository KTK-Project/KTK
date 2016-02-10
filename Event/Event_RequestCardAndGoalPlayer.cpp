#include "Event_RequestCardAndGoalPlayer.h"

std::shared_ptr<Event_RequestCard> Event_RequestCardAndGoalPlayer::getRequestCardEvent() {
	return this->m_requestCardEvent;
}

void Event_RequestCardAndGoalPlayer::setRequestCardEvent(std::shared_ptr<Event_RequestCard> m_requestCardEvent) {
	this->m_requestCardEvent = m_requestCardEvent;
}

std::shared_ptr<Event_RequestGoalPlayer> Event_RequestCardAndGoalPlayer::getRequestGoalPlayerEvent() {
	return this->m_requestGoalPlayerEvent;
}

void Event_RequestCardAndGoalPlayer::setRequestGoalPlayerEvent(std::shared_ptr<Event_RequestGoalPlayer> m_requestGoalPlayerEvent) {
	this->m_requestGoalPlayerEvent = m_requestGoalPlayerEvent;
}

void Event_RequestCardAndGoalPlayer::eventResolve() {
	// TODO - implement Event_RequestCardAndGoalPlayer::eventResolve
	throw "Not yet implemented";
}
