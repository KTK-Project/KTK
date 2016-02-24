#ifndef Card_Dodge_h__
#define Card_Dodge_h__

#include "Card_Basic.h"
#include <memory>
#include "Player\Player.h"

class Card_Dodge : public Card_Basic {


public:
	Card_Dodge(ECardSuit Suit, int number) : Card_Basic(ECardName::DODGE, Suit, number) { }
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;
};
#endif // Card_Dodge_h__
