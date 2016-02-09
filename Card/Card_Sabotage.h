#ifndef Card_Sabotage_h__
#define Card_Sabotage_h__

#include <vector>
#include "Card_Strategy.h"
#include "Player\Player.h"

class Card_Sabotage : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(std::shared_ptr<Player> requester);

	std::vector<std::shared_ptr<Player>> getCandidate(std::shared_ptr<Player> playCardPlayer);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_Sabotage_h__
