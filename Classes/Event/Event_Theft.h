#ifndef Event_Theft_h__
#define Event_Theft_h__

#include "Player\Player.h"
#include <memory>
#include "Event_Strategy.h"

class Event_Theft : public Event_Strategy {
public:
	std::shared_ptr<Player> getGoalPlayer() const;
	void setGoalPlayer(const std::shared_ptr<Player> & goalPlayer);
	void eventResolve() const;
private:
	std::weak_ptr<Player> m_goalPlayer;
};
#endif // Event_Theft_h__
