#ifndef Card_FlawlessDefense_h__
#define Card_FlawlessDefense_h__

#include "Card_Strategy.h"

class Card_FlawlessDefense : public Card_Strategy {


public:
	int getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const;
};
#endif // Card_FlawlessDefense_h__
