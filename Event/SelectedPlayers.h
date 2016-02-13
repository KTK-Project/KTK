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
	std::deque<std::shared_ptr<Player>> getPlayers() const;

	void addPlayer(const std::shared_ptr<Player> player) const;

	void removePlayer(const std::shared_ptr<Player> player) const;

	void popFront() const;

	void popAll() const;

	bool hasPlayer(const std::shared_ptr<Player> player) const;

	std::function<void ()> getMaxCallBack() const;

	void setMaxCallBack(const std::function<void ()> m_maxCallBack) const;

	std::function<void ()> getUnmaxCallBack() const;

	void setUnmaxCallBack(const std::function<void ()> m_unmaxCallBack) const;
};
#endif // SelectedPlayers_h__
