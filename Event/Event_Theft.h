#ifndef Event_Theft_h__
#define Event_Theft_h__


class Event_Theft : Event_Strategy {

public:
	Player* m_goalPlayer;

	void eventResolve();
};
#endif // Event_Theft_h__
