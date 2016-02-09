

#ifndef Card_Theft_h__
#define Card_Theft_h__

#include "Card_Strategy.h"
#include <vector>
#include <memory>
#include "Player\Player.h"

class Card_Theft : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(std::shared_ptr<Player> requester);

	std::vector<std::shared_ptr<Player>> getCandidate(std::shared_ptr<Player> playCardPlayer);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_Theft_h__
