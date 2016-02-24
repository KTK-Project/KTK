#ifndef Event_RequestGoalPlayer_h__
#define Event_RequestGoalPlayer_h__

#include "Event_Interaction.h"
#include "SelectedPlayers.h"
#include <vector>

class Event_RequestGoalPlayer : public Event_Interaction {

private:
	std::vector<std::shared_ptr<Player>> m_candidate;
	int m_goalPlayerMaxQulitity;
	int m_goalPlayerMinQulitity;
	SelectedPlayers m_receiver;

public:
	std::vector<std::shared_ptr<Player>> getCandidate() const;

	void setCandidate(const std::vector<std::shared_ptr<Player>>& m_candidate) const;

	int getGoalPlayerMaxQulitity() const;

	void setGoalPlayerMaxQulitity(const int m_goalPlayerMaxQulitity) const;

	int getGoalPlayerMinQulitity() const;

	void setGoalPlayerMinQulitity(const int m_goalPlayerMinQulitity) const;

	SelectedPlayers getReceiver() const;

	void setReceiver(const SelectedPlayers m_receiver) const;

	void eventResolve() const;
};
#endif // Event_RequestGoalPlayer_h__
