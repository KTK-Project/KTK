#ifndef Event_OathInPeachGarden_h__
#define Event_OathInPeachGarden_h__


class Event_OathInPeachGarden : Event_Strategy {

public:
	Player* m_currentPlayer;

	void eventResolve();
};
#endif // Event_OathInPeachGarden_h__
