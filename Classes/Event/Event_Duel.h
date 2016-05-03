#ifndef Event_Duel_h__
#define Event_Duel_h__

#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_Duel : public Event_Strategy {
public:
	std::shared_ptr<Player> getGoalPlayer() const;
	void setGoalPlayer(const std::shared_ptr<Player> & goalPlayer);
	std::shared_ptr<Player> getCurrentPlayer() const;
	void setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer);
	void eventResolve() const;
private:
	std::weak_ptr<Player> m_goalPlayer;
	std::weak_ptr<Player> m_currentPlayer;
};
#endif // Event_Duel_h__
