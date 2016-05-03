#ifndef Event_RequestCardAndGoalPlayer_h__
#define Event_RequestCardAndGoalPlayer_h__

#include "Event_Interaction.h"
#include <memory>
#include "Event_RequestCard.h"
#include "Event_RequestGoalPlayer.h"

class Event_RequestCardAndGoalPlayer : public Event_Interaction {
public:
	const std::shared_ptr<Event_RequestCard> & getRequestCardEvent() const;
	void setRequestCardEvent(const std::shared_ptr<Event_RequestCard> & requestCardEvent);
	const std::shared_ptr<Event_RequestGoalPlayer> & getRequestGoalPlayerEvent() const;
	void setRequestGoalPlayerEvent(const std::shared_ptr<Event_RequestGoalPlayer> & requestGoalPlayerEvent);
	void eventResolve() const;
private:
	std::shared_ptr<Event_RequestCard> m_requestCardEvent;
	std::shared_ptr<Event_RequestGoalPlayer> m_requestGoalPlayerEvent;
};
#endif // Event_RequestCardAndGoalPlayer_h__
