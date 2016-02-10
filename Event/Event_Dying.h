#ifndef Event_Dying_h__
#define Event_Dying_h__

#include "Event_Base.h"
#include "Player\Player.h"

class Event_Dying : public Event_Base {

private:
	std::shared_ptr<Player> m_firstPlayer;
	std::shared_ptr<Player> m_DyingPlayer;
	std::shared_ptr<Player> m_peachPlayer;

public:
	std::shared_ptr<Player> getFirstPlayer();

	void setFirstPlayer(std::shared_ptr<Player> m_firstPlayer);

	std::shared_ptr<Player> getDyingPlayer();

	void setDyingPlayer(std::shared_ptr<Player> m_DyingPlayer);

	void eventResolve();
};
#endif // Event_Dying_h__
