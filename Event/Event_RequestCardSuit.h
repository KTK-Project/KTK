#ifndef Event_RequestCardSuit_h__
#define Event_RequestCardSuit_h__


class Event_RequestCardSuit : Event_Interaction {

public:
	Card_Suit m_receiver;

	void eventResolve();
};
#endif // Event_RequestCardSuit_h__
