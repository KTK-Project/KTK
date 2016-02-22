#ifndef Event_SouthInvasion_h__
#define Event_SouthInvasion_h__

#include "Event_Strategy.h"

class Event_SouthInvasion : public Event_Strategy {
public:
	const std::shared_ptr<Player> & getCurrentPlayer() const;
	void setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer);

	void eventResolve() const;

private:
	std::shared_ptr<Player> m_currentPlayer;
};
#endif // Event_SouthInvasion_h__
