#ifndef Event_RequestGoalPlayer_h__
#define Event_RequestGoalPlayer_h__

#include "Event_Interaction.h"
#include "SelectedPlayers.h"
#include <vector>

class Event_RequestGoalPlayer : public Event_Interaction {
public:
	std::vector<std::shared_ptr<Player>> getCandidate();
	int getGoalPlayerMaxQulitity() const;
	void setGoalPlayerMaxQulitity(int goalPlayerMaxQulitity);
	int getGoalPlayerMinQulitity() const;
	void setGoalPlayerMinQulitity(int goalPlayerMinQulitity);
	SelectedPlayers & getReceiver();
	void eventResolve() const;
private:
	std::vector<std::shared_ptr<Player>> m_candidate;
	int m_goalPlayerMaxQulitity;
	int m_goalPlayerMinQulitity;
	SelectedPlayers m_receiver;
};
#endif // Event_RequestGoalPlayer_h__
