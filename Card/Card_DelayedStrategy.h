#ifndef Card_DelayedStrategy_h__
#define Card_DelayedStrategy_h__

#include "Card.h"

class Card_DelayedStrategy : public Card {
public:
	Card_DelayedStrategy(ECardName name, ECardSuit suit, int number);
	virtual ~Card_DelayedStrategy() { }
};
#endif // Card_DelayedStrategy_h__
