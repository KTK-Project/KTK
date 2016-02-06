#ifndef Event_Sabotage_h__
#define Event_Sabotage_h__


class Event_Sabotage : Event_Strategy {

public:
	Player* m_goalPlayer;

	void eventResolve();
};
#endif // Event_Sabotage_h__
