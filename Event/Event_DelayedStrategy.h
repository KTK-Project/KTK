#ifndef Event_DelayedStrategy_h__
#define Event_DelayedStrategy_h__

#include "Event_Base.h"
#include "Player\Player.h"

class Event_DelayedStrategy : public Event_Base {

public:
	std::shared_ptr<Player> m_ownerPlayer;

	Event_DelayedStrategy();

	std::shared_ptr<Player> getOwnerPlayer() const;

	void setOwnerPlayer(const std::shared_ptr<Player> m_ownerPlayer) const;
};
#endif // Event_DelayedStrategy_h__
