#ifndef Event_Strategy_h__
#define Event_Strategy_h__

#include "Event_Base.h"
#include <memory>
#include "Player\Player.h"

class Event_Strategy : Event_Base {

public:
	std::shared_ptr<Player> m_playCardPlayer;

	std::shared_ptr<Player> getPlayCardPlayer();

	void setPlayCardPlayer(std::shared_ptr<Player> m_playCardPlayer);
};
#endif // Event_Strategy_h__
