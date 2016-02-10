#ifndef Card_Harvest_h__
#define Card_Harvest_h__

#include "Card_Strategy.h"

class Card_Harvest : public Card_Strategy {


public:
	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_Harvest_h__
