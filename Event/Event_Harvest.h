#ifndef Event_Harvest_h__
#define Event_Harvest_h__

#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_Harvest : public Event_Strategy {
public:
	std::shared_ptr<Player> getCurrentPlayer() const;
	void setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer);
	void eventResolve() const;
private:
	std::weak_ptr<Player> m_currentPlayer;
};
#endif // Event_Harvest_h__
