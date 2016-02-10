#ifndef Event_FlawlessDefense_h__
#define Event_FlawlessDefense_h__

#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_FlawlessDefense : public Event_Strategy {

private:
	std::shared_ptr<Player> m_firstPlayer;
	bool m_success;

public:
	std::shared_ptr<Player> getFirstPlayer();

	void setFirstPlayer(std::shared_ptr<Player> m_firstPlayer);

	bool getSuccess();

	void setSuccess(bool m_success);

	void eventResolve();
};
#endif // Event_FlawlessDefense_h__
