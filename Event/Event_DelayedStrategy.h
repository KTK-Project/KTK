#ifndef Event_DelayedStrategy_h__
#define Event_DelayedStrategy_h__

#include "Event_Base.h"
#include "Player\Player.h"

class Event_DelayedStrategy : public Event_Base {
public:
	Event_DelayedStrategy();
	const std::shared_ptr<Player> & getOwnerPlayer() const;
	void setOwnerPlayer(const std::shared_ptr<Player> & ownerPlayer);

private:
	std::shared_ptr<Player> m_ownerPlayer;
};
#endif // Event_DelayedStrategy_h__
