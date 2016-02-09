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
	std::vector<std::shared_ptr<Player>> getM_candidate();

	void setM_candidate(std::vector<std::shared_ptr<Player>>& m_candidate);

	int getM_goalPlayerMaxQulitity();

	void setM_goalPlayerMaxQulitity(int m_goalPlayerMaxQulitity);

	int getM_goalPlayerMinQulitity();

	void setM_goalPlayerMinQulitity(int m_goalPlayerMinQulitity);

	SelectedPlayers getM_receiver();

	void setM_receiver(SelectedPlayers m_receiver);

	void eventResolve();
};
#endif // Event_RequestGoalPlayer_h__
