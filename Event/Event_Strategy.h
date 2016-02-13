#ifndef Event_Strategy_h__
#define Event_Strategy_h__

#include "Event_Base.h"
#include <memory>
#include "Player\Player.h"

class Event_Strategy : Event_Base {

public:
	std::shared_ptr<Player> m_playCardPlayer;

	std::shared_ptr<Player> getPlayCardPlayer() const;

	void setPlayCardPlayer(const std::shared_ptr<Player> m_playCardPlayer) const;
};
#endif // Event_Strategy_h__
