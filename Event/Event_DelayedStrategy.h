#ifndef Event_DelayedStrategy_h__
#define Event_DelayedStrategy_h__


class Event_DelayedStrategy : Event_Base {

public:
	Player* m_ownerPlayer;

	Event_DelayedStrategy();

	Player* getM_ownerPlayer();

	void setM_ownerPlayer(Player* m_ownerPlayer);
};
#endif // Event_DelayedStrategy_h__
