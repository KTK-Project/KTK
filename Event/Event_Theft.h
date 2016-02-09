#ifndef Event_Theft_h__
#define Event_Theft_h__

#include "Player\Player.h"
#include <memory>
#include "Event_Strategy.h"

class Event_Theft : Event_Strategy {

public:
	std::shared_ptr<Player> m_goalPlayer;

	void eventResolve();
};
#endif // Event_Theft_h__
