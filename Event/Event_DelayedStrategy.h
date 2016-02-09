#ifndef Event_DelayedStrategy_h__
#define Event_DelayedStrategy_h__

#include "Event_Base.h"
#include "Player\Player.h"

class Event_DelayedStrategy : public Event_Base {

public:
	std::shared_ptr<Player> m_ownerPlayer;

	Event_DelayedStrategy();

	std::shared_ptr<Player> getM_ownerPlayer();

	void setM_ownerPlayer(std::shared_ptr<Player> m_ownerPlayer);
};
#endif // Event_DelayedStrategy_h__
