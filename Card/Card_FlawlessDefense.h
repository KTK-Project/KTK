#ifndef Card_FlawlessDefense_h__
#define Card_FlawlessDefense_h__

#include "Card_Strategy.h"

class Card_FlawlessDefense : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(std::shared_ptr<Player> requester);
};
#endif // Card_FlawlessDefense_h__
