#ifndef SelectedPlayers_h__
#define SelectedPlayers_h__

#include <deque>
#include <memory>
#include "Player\Player.h"
#include <functional>

class SelectedPlayers {

private:
	std::deque<std::shared_ptr<Player>> m_players;
	int m_maxSelects;
	std::function<void ()> m_maxCallBack;
	std::function<void ()> m_unmaxCallBack;

public:
	std::deque<std::shared_ptr<Player>> getM_players();

	void addPlayer(std::shared_ptr<Player> player);

	void removePlayer(std::shared_ptr<Player> player);

	void popFront();

	void popAll();

	bool hasPlayer(std::shared_ptr<Player> player);

	std::function<void ()> getM_maxCallBack();

	void setM_maxCallBack(std::function<void ()> m_maxCallBack);

	std::function<void ()> getM_unmaxCallBack();

	void setM_unmaxCallBack(std::function<void ()> m_unmaxCallBack);
};
#endif // SelectedPlayers_h__
