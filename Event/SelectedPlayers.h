#ifndef SelectedPlayers_h__
#define SelectedPlayers_h__


class SelectedPlayers {

private:
	deque<Player*> m_players;
	int m_maxSelects;
	std::function<void ()> m_maxCallBack;
	std::function<void ()> m_unmaxCallBack;

public:
	deque<Player*> getM_players();

	void addPlayer(Player* player);

	void removePlayer(Player* player);

	void popFront();

	void popAll();

	bool hasPlayer(Player* player);

	std::function<void ()> getM_maxCallBack();

	void setM_maxCallBack(std::function<void ()> m_maxCallBack);

	std::function<void ()> getM_unmaxCallBack();

	void setM_unmaxCallBack(std::function<void ()> m_unmaxCallBack);
};
#endif // SelectedPlayers_h__
