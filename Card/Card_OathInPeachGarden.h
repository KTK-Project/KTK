#ifndef Card_OathInPeachGarden_h__
#define Card_OathInPeachGarden_h__

#include "Card_Strategy.h"

class Card_OathInPeachGarden : public Card_Strategy {


public:
	Card_OathInPeachGarden(ECardSuit Suit, int number) : Card_Strategy(ECardName::OATHLNPEACHGARDEN, Suit, number) { };
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;

	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_OathInPeachGarden_h__
