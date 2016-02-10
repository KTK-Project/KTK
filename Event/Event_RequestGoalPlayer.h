#ifndef Event_RequestGoalPlayer_h__
#define Event_RequestGoalPlayer_h__

#include "Event_Interaction.h"
#include "SelectedPlayers.h"
#include <vector>

class Event_RequestGoalPlayer : Event_Interaction {

private:
	std::vector<std::shared_ptr<Player>> m_candidate;
	int m_goalPlayerMaxQulitity;
	int m_goalPlayerMinQulitity;
	SelectedPlayers m_receiver;

public:
	std::vector<std::shared_ptr<Player>> getCandidate();

	void setCandidate(std::vector<std::shared_ptr<Player>>& m_candidate);

	int getGoalPlayerMaxQulitity();

	void setGoalPlayerMaxQulitity(int m_goalPlayerMaxQulitity);

	int getGoalPlayerMinQulitity();

	void setGoalPlayerMinQulitity(int m_goalPlayerMinQulitity);

	SelectedPlayers getReceiver();

	void setReceiver(SelectedPlayers m_receiver);

	void eventResolve();
};
#endif // Event_RequestGoalPlayer_h__
