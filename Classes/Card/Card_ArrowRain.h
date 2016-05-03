#ifndef Card_ArrowRain_h__
#define Card_ArrowRain_h__

#include "Card_Strategy.h"

class Card_ArrowRain : public Card_Strategy {
public:
	Card_ArrowRain(ECardSuit Suit, int number) : Card_Strategy(ECardName::ARROWRAIN, Suit, number) { }
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;
	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_ArrowRain_h__
