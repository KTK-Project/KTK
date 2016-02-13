#ifndef PlayersManger_h__
#define PlayersManger_h__

#include <vector>
#include "Player\Player.h"
#include <functional>

class PlayersManger {

private:
	std::vector<std::shared_ptr<Player>> m_players;
	std::shared_ptr<Player> m_lordPlayer;
	std::shared_ptr<Player> m_currentPlayer;
	std::shared_ptr<Player> m_forwardPlayer;

public:
	std::vector<std::shared_ptr<Player>>& getPlayers() const;

	std::vector<std::shared_ptr<Player>> getPlayers(const std::function<bool (const std::shared_ptr<Player>)> filter) const;

	std::shared_ptr<Player> getNextPlayer(const std::shared_ptr<Player> player) const;

	std::shared_ptr<Player> getNextPlayerWithFilter(const std::shared_ptr<Player> player, const std::function<bool (const std::shared_ptr<Player>)> filter) const;

	int getPlayerCount(const std::function<bool (const std::shared_ptr<Player>)> filter) const;

	int getDistanceFromTwoPlayers(const std::shared_ptr<Player> firstPlayer, const std::shared_ptr<Player> secondPlayer) const;

	std::shared_ptr<Player> getLordPlayer() const;

	void setLordPlayer(const std::shared_ptr<Player> lordPlayer) const;

	std::shared_ptr<Player> getCurrentPlayer() const;

	void setCurrentPlayer(const std::shared_ptr<Player> currentPlayer) const;

	std::shared_ptr<Player> getForwardPlayer() const;

	void setForwardPlayer(const std::shared_ptr<Player> forwardPlayer) const;
};
#endif // PlayersManger_h__
