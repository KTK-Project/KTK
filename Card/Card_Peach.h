#ifndef Card_Peach_h__
#define Card_Peach_h__

#include <vector>
#include "Card_Basic.h"
#include "Player\Player.h"

class Card_Peach : public Card_Basic {


public:
	Card_Peach(ECardSuit suit, int number) : Card_Basic(ECardName::PEACH, suit, number) { }
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;

	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_Peach_h__
