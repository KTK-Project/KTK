#ifndef Event_Sabotage_h__
#define Event_Sabotage_h__

#include "Event_Strategy.h"

class Event_Sabotage : public Event_Strategy {
public:
	const std::shared_ptr<Player> & getGoalPlayer() const;
	void setGoalPlayer(const std::shared_ptr<Player> & goalPlayer);
	void eventResolve() const;
private:
	std::shared_ptr<Player> m_goalPlayer;
};
#endif // Event_Sabotage_h__
