#ifndef Card_Harvest_h__
#define Card_Harvest_h__

#include "Card_Strategy.h"

class Card_Harvest : public Card_Strategy {


public:
	Card_Harvest(ECardSuit Suit, int number) :Card_Strategy(ECardName::HARVEST, Suit, number) {}
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;

	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_Harvest_h__
