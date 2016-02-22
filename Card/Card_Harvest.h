#ifndef Card_Harvest_h__
#define Card_Harvest_h__

#include "Card_Strategy.h"

class Card_Harvest : public Card_Strategy {


public:
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;

	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_Harvest_h__
