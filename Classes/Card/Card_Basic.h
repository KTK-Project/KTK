#ifndef Card_Basic_h__
#define Card_Basic_h__

#include "Card.h"

class Card_Basic : public Card {
public:
	Card_Basic(ECardName name, ECardSuit suit, int number);
	virtual ~Card_Basic() { }
};
#endif // Card_Basic_h__
