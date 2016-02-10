#ifndef Event_RequestCardAndGoalPlayer_h__
#define Event_RequestCardAndGoalPlayer_h__

#include "Event_Interaction.h"
#include <memory>
#include "Event_RequestCard.h"
#include "Event_RequestGoalPlayer.h"

class Event_RequestCardAndGoalPlayer : Event_Interaction {

private:
	std::shared_ptr<Event_RequestCard> m_requestCardEvent;
	std::shared_ptr<Event_RequestGoalPlayer> m_requestGoalPlayerEvent;

public:
	std::shared_ptr<Event_RequestCard> getRequestCardEvent();

	void setRequestCardEvent(std::shared_ptr<Event_RequestCard> m_requestCardEvent);

	std::shared_ptr<Event_RequestGoalPlayer> getRequestGoalPlayerEvent();

	void setRequestGoalPlayerEvent(std::shared_ptr<Event_RequestGoalPlayer> m_requestGoalPlayerEvent);

	void eventResolve();
};
#endif // Event_RequestCardAndGoalPlayer_h__
