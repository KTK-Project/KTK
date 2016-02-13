#ifndef Event_SouthInvasion_h__
#define Event_SouthInvasion_h__

#include "Event_Strategy.h"

class Event_SouthInvasion : Event_Strategy {

public:
	std::shared_ptr<Player> m_currentPlayer;

	void eventResolve() const;
};
#endif // Event_SouthInvasion_h__
