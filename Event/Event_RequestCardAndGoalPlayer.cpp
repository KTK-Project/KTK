#include "Event_RequestCardAndGoalPlayer.h"

std::shared_ptr<Event_RequestCard> Event_RequestCardAndGoalPlayer::getRequestCardEvent() const {
	return this->m_requestCardEvent;
}

void Event_RequestCardAndGoalPlayer::setRequestCardEvent(const std::shared_ptr<Event_RequestCard> m_requestCardEvent) const {
	this->m_requestCardEvent = m_requestCardEvent;
}

std::shared_ptr<Event_RequestGoalPlayer> Event_RequestCardAndGoalPlayer::getRequestGoalPlayerEvent() const {
	return this->m_requestGoalPlayerEvent;
}

void Event_RequestCardAndGoalPlayer::setRequestGoalPlayerEvent(const std::shared_ptr<Event_RequestGoalPlayer> m_requestGoalPlayerEvent) const {
	this->m_requestGoalPlayerEvent = m_requestGoalPlayerEvent;
}

void Event_RequestCardAndGoalPlayer::eventResolve() const {
	// TODO - implement Event_RequestCardAndGoalPlayer::eventResolve
	throw "Not yet implemented";
}
