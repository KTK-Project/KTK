#ifndef Event_FlawlessDefense_h__
#define Event_FlawlessDefense_h__

#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_FlawlessDefense : public Event_Strategy {
public:
	const std::shared_ptr<Player> & getFirstPlayer() const;
	void setFirstPlayer(const std::shared_ptr<Player> & firstPlayer);
	bool getSuccess() const;
	void setSuccess(bool success);

	void eventResolve() const;

private:
	std::shared_ptr<Player> m_firstPlayer;
	bool m_success;
};
#endif // Event_FlawlessDefense_h__
