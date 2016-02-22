#ifndef Card_SouthInvasion_h__
#define Card_SouthInvasion_h__

#include "Card_Strategy.h"

class Card_SouthInvasion : public Card_Strategy {


public:
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;

	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_SouthInvasion_h__
