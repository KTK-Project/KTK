#ifndef Event_Harvest_h__
#define Event_Harvest_h__


class Event_Harvest : Event_Strategy {

public:
	Player* m_currentPlayer;

	void eventResolve();
};
#endif // Event_Harvest_h__
