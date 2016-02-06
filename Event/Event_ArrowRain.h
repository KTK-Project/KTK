#ifndef Event_ArrowRain_h__
#define Event_ArrowRain_h__


class Event_ArrowRain : Event_Strategy {

public:
	Player* m_currentPlayer;

	void eventResolve();
};
#endif // Event_ArrowRain_h__
