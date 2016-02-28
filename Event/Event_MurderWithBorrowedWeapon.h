#ifndef Event_MurderWithBorrowedWeapon_h__
#define Event_MurderWithBorrowedWeapon_h__

#include "Event_Strategy.h"
#include "Player\Player.h"

class Event_MurderWithBorrowedWeapon : public Event_Strategy {
public:
	const std::shared_ptr<Player> & getGoalPlayer1() const;
	void setGoalPlayer1(const std::shared_ptr<Player> & goalPlayer1);
	const std::shared_ptr<Player> & getGoalPlayer2() const;
	void setGoalPlayer2(const std::shared_ptr<Player> & goalPlayer2);
	void eventResolve() const;
private:
	std::shared_ptr<Player> m_goalPlayer1;
	std::shared_ptr<Player> m_goalPlayer2;
};
#endif // Event_MurderWithBorrowedWeapon_h__
