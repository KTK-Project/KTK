#ifndef Event_OathInPeachGarden_h__
#define Event_OathInPeachGarden_h__

#include <memory>
#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_OathInPeachGarden : public Event_Strategy {

public:
	std::shared_ptr<Player> m_currentPlayer;

	void eventResolve() const;
};
#endif // Event_OathInPeachGarden_h__
