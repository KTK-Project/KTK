#ifndef Event_Duel_h__
#define Event_Duel_h__

#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_Duel : public Event_Strategy {

private:
	std::shared_ptr<Player> m_goalPlayer;
	std::shared_ptr<Player> m_currentPlayer;

public:
	void eventResolve();
};
#endif // Event_Duel_h__
