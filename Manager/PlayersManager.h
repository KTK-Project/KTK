#ifndef PlayersManager_h__
#define PlayersManager_h__

#include <vector>
#include <functional>
#include "Player\Player.h"

class PlayersManager {
public:
	PlayersManager();

	const std::shared_ptr<Player> & getLordPlayer() const;
	void setLordPlayer(const std::shared_ptr<Player> & lordPlayer);
	const std::shared_ptr<Player> & getCurrentPlayer() const;
	void setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer);
	const std::shared_ptr<Player> & getForwardPlayer() const;
	void setForwardPlayer(const std::shared_ptr<Player> & forwardPlayer);

	// 获取player容器
	std::vector<std::shared_ptr<Player>> & getPlayers();
	// 获取满足过滤器的player
	std::vector<std::shared_ptr<Player>> getPlayersWithFilter(const std::function<bool(const std::shared_ptr<Player> &)> & filter) const;
	// 获取下一个player
	std::shared_ptr<Player> getNextPlayer(const std::shared_ptr<Player> & currentPlayer) const;
	// 获取满足过滤器的下一个player
	std::shared_ptr<Player> getNextPlayerWithFilter(const std::shared_ptr<Player> & currentPlayer, const std::function<bool(const std::shared_ptr<Player> &)> & filter) const;
	// 获取满足过滤器的player个数
	int getPlayerCount(const std::function<bool(const std::shared_ptr<Player> &)> & filter) const;

private:
	std::shared_ptr<Player> m_lordPlayer;			// 主公player
	std::shared_ptr<Player> m_currentPlayer;		// 当前player
	std::shared_ptr<Player> m_forwardPlayer;		// 前置player
	std::vector<std::shared_ptr<Player>> m_players;	// player容器
};

#endif // PlayersManager_h__
