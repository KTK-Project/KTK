#ifndef Card_SouthInvasion_h__
#define Card_SouthInvasion_h__

#include "Card_Strategy.h"

class Card_SouthInvasion : public Card_Strategy {


public:
	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_SouthInvasion_h__
