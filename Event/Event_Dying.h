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
	std::shared_ptr<Player> getFirstPlayer() const;

	void setFirstPlayer(const std::shared_ptr<Player> m_firstPlayer) const;

	std::shared_ptr<Player> getDyingPlayer() const;

	void setDyingPlayer(const std::shared_ptr<Player> m_DyingPlayer) const;

	void eventResolve() const;
};
#endif // Event_Dying_h__
