#ifndef Card_AllOutOfNone_h__
#define Card_AllOutOfNone_h__

#include "Card_Strategy.h"

class Card_AllOutOfNone : public Card_Strategy {
public:
	Card_AllOutOfNone(ECardSuit suit, int number) : Card_Strategy(ECardName::ALLOUTOFNONE, suit, number) { }
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;
	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_AllOutOfNone_h__
