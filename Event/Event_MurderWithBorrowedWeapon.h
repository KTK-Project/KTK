#ifndef Event_MurderWithBorrowedWeapon_h__
#define Event_MurderWithBorrowedWeapon_h__


class Event_MurderWithBorrowedWeapon : Event_Strategy {

private:
	Player* m_goalPlayer1;
	Player* m_goalPlayer2;

public:
	void eventResolve();
};
#endif // Event_MurderWithBorrowedWeapon_h__
