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
	std::vector<std::shared_ptr<Player>>& getPlayers();

	std::vector<std::shared_ptr<Player>> getPlayers(std::function<bool (std::shared_ptr<Player>)> filter);

	std::shared_ptr<Player> getNextPlayer(std::shared_ptr<Player> player);

	std::shared_ptr<Player> getNextPlayerWithFilter(std::shared_ptr<Player> player, std::function<bool (std::shared_ptr<Player>)> filter);

	int getPlayerCount(std::function<bool (std::shared_ptr<Player>)> filter);

	int getDistanceFromTwoPlayers(std::shared_ptr<Player> firstPlayer, std::shared_ptr<Player> secondPlayer);

	std::shared_ptr<Player> getLordPlayer();

	void setLordPlayer(std::shared_ptr<Player> lordPlayer);

	std::shared_ptr<Player> getCurrentPlayer();

	void setCurrentPlayer(std::shared_ptr<Player> currentPlayer);

	std::shared_ptr<Player> getForwardPlayer();

	void setForwardPlayer(std::shared_ptr<Player> forwardPlayer);
};
#endif // PlayersManger_h__
