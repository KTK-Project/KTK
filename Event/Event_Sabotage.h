#ifndef Event_Sabotage_h__
#define Event_Sabotage_h__

#include "Event_Strategy.h"

class Event_Sabotage : public Event_Strategy {

public:
	std::shared_ptr<Player> m_goalPlayer;

	void eventResolve() const;
};
#endif // Event_Sabotage_h__
