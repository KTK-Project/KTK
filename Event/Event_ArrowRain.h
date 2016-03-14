#ifndef Event_ArrowRain_h__
#define Event_ArrowRain_h__

#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_ArrowRain : public Event_Strategy {
public:
	std::shared_ptr<Player> getCurrentPlayer() const;
	void setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer);
	void eventResolve() const;
private:
	std::weak_ptr<Player> m_currentPlayer;
};
#endif // Event_ArrowRain_h__
