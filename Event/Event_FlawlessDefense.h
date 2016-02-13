#ifndef Event_FlawlessDefense_h__
#define Event_FlawlessDefense_h__

#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_FlawlessDefense : public Event_Strategy {

private:
	std::shared_ptr<Player> m_firstPlayer;
	bool m_success;

public:
	std::shared_ptr<Player> getFirstPlayer() const;

	void setFirstPlayer(const std::shared_ptr<Player> m_firstPlayer) const;

	bool getSuccess() const;

	void setSuccess(const bool m_success) const;

	void eventResolve() const;
};
#endif // Event_FlawlessDefense_h__
