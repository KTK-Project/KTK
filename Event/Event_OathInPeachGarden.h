#ifndef Event_OathInPeachGarden_h__
#define Event_OathInPeachGarden_h__

#include <memory>
#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_OathInPeachGarden : public Event_Strategy {
public:
	const std::shared_ptr<Player> & getCurrentPlayer() const;
	void setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer);
	void eventResolve() const;
private:
	std::shared_ptr<Player> m_currentPlayer;
};
#endif // Event_OathInPeachGarden_h__
