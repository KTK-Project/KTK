#ifndef Event_Dying_h__
#define Event_Dying_h__


class Event_Dying : Event_Base {

private:
	Player* m_firstPlayer;
	Player* m_DyingPlayer;
	Player* m_peachPlayer;

public:
	Player* getM_firstPlayer();

	void setM_firstPlayer(Player* m_firstPlayer);

	Player* getM_DyingPlayer();

	void setM_DyingPlayer(Player* m_DyingPlayer);

	void eventResolve();
};
#endif // Event_Dying_h__
