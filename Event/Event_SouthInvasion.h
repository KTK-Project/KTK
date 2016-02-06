#ifndef Event_SouthInvasion_h__
#define Event_SouthInvasion_h__


class Event_SouthInvasion : Event_Strategy {

public:
	Player* m_currentPlayer;

	void eventResolve();
};
#endif // Event_SouthInvasion_h__
