#ifndef Event_ArrowRain_h__
#define Event_ArrowRain_h__

#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_ArrowRain : public Event_Strategy {

public:
	Player* m_currentPlayer;

	void eventResolve();
};
#endif // Event_ArrowRain_h__
