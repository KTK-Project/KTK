#ifndef Event_FlawlessDefense_h__
#define Event_FlawlessDefense_h__


class Event_FlawlessDefense : Event_Strategy {

private:
	Player* m_firstPlayer;
	bool m_success;

public:
	Player* getM_firstPlayer();

	void setM_firstPlayer(Player* m_firstPlayer);

	bool getM_success();

	void setM_success(bool m_success);

	void eventResolve();
};
#endif // Event_FlawlessDefense_h__
