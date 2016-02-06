#ifndef Event_Duel_h__
#define Event_Duel_h__


class Event_Duel : Event_Strategy {

private:
	Player* m_goalPlayer;
	Player* m_currentPlayer;

public:
	void eventResolve();
};
#endif // Event_Duel_h__
