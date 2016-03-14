#ifndef Event_Dying_h__
#define Event_Dying_h__

#include "Event_Base.h"
#include "Player\Player.h"

class Event_Dying : public Event_Base {
public:
	std::shared_ptr<Player> getFirstPlayer() const;
	void setFirstPlayer(const std::shared_ptr<Player> & firstPlayer);
	std::shared_ptr<Player> getDyingPlayer() const;
	void setDyingPlayer(const std::shared_ptr<Player> & dyingPlayer);
	std::shared_ptr<Player> getPeachPlayer() const;
	void setPeachPlayer(const std::shared_ptr<Player> & peachPlayer);
	void eventResolve() const;
private:
	std::weak_ptr<Player> m_firstPlayer;
	std::weak_ptr<Player> m_dyingPlayer;
	std::weak_ptr<Player> m_peachPlayer;
};
#endif // Event_Dying_h__
