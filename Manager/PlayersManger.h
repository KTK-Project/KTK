#ifndef PlayersManger_h__
#define PlayersManger_h__

#include <vector>
#include "Player\Player.h"
#include <functional>

class PlayersManger {

private:
	std::vector<Player*> m_players;
	Player* m_lordPlayer;
	Player* m_currentPlayer;
	Player* m_forwardPlayer;

public:
	std::vector<Player*>& getPlayers();

	std::vector<Player*> getPlayers(std::function<bool (Player*)> filter);

	Player* getNextPlayer(Player* player);

	Player* getNextPlayerWithFilter(Player* player, std::function<bool (Player*)> filter);

	int getPlayerCount(std::function<bool (Player*)> filter);

	int getDistanceFromTwoPlayers(Player* firstPlayer, Player* secondPlayer);

	Player* getLordPlayer();

	void setLordPlayer(Player* lordPlayer);

	Player* getCurrentPlayer();

	void setCurrentPlayer(Player* currentPlayer);

	Player* getForwardPlayer();

	void setForwardPlayer(Player* forwardPlayer);
};
#endif // PlayersManger_h__
