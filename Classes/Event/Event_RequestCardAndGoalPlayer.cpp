#include "Event_RequestCardAndGoalPlayer.h"

const std::shared_ptr<Event_RequestCard> & Event_RequestCardAndGoalPlayer::getRequestCardEvent() const {
	return m_requestCardEvent;
}

void Event_RequestCardAndGoalPlayer::setRequestCardEvent(const std::shared_ptr<Event_RequestCard> & requestCardEvent) {
	m_requestCardEvent = requestCardEvent;
}

const std::shared_ptr<Event_RequestGoalPlayer> & Event_RequestCardAndGoalPlayer::getRequestGoalPlayerEvent() const {
	return m_requestGoalPlayerEvent;
}

void Event_RequestCardAndGoalPlayer::setRequestGoalPlayerEvent(const std::shared_ptr<Event_RequestGoalPlayer> & requestGoalPlayerEvent) {
	m_requestGoalPlayerEvent = requestGoalPlayerEvent;
}

void Event_RequestCardAndGoalPlayer::eventResolve() const {
	// TODO - implement Event_RequestCardAndGoalPlayer::eventResolve
	throw "Not yet implemented";
}
