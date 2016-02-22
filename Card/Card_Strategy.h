#ifndef Card_Strategy_h__
#define Card_Strategy_h__

#include "Card.h"

class Card_Strategy : public Card {
public:
	Card_Strategy(ECardName name, ECardSuit suit, int number);
	virtual ~Card_Strategy() = 0;
};
#endif // Card_Strategy_h__
