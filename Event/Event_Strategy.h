#ifndef Event_Strategy_h__
#define Event_Strategy_h__


class Event_Strategy : Event_Base {

public:
	Player* m_playCardPlayer;

	Player* getM_playCardPlayer();

	void setM_playCardPlayer(Player* m_playCardPlayer);
};
#endif // Event_Strategy_h__
