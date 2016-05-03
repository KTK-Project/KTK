#ifndef Event_Strategy_h__
#define Event_Strategy_h__

#include "Event_Base.h"
#include <memory>
#include "Player\Player.h"

class Event_Strategy : public Event_Base {
public:
	std::shared_ptr<Player> getPlayCardPlayer() const;
	void setPlayCardPlayer(const std::shared_ptr<Player> & playCardPlayer);
private:
	std::weak_ptr<Player> m_playCardPlayer;
};
#endif // Event_Strategy_h__
