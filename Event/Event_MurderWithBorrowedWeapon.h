#ifndef Event_MurderWithBorrowedWeapon_h__
#define Event_MurderWithBorrowedWeapon_h__

#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_MurderWithBorrowedWeapon : public Event_Strategy {

private:
	std::shared_ptr<Player> m_goalPlayer1;
	std::shared_ptr<Player> m_goalPlayer2;

public:
	void eventResolve();
};
#endif // Event_MurderWithBorrowedWeapon_h__
