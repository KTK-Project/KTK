#ifndef Card_TripleHalberd_h__
#define Card_TripleHalberd_h__

#include "Card_Weapon.h"

class Card_TripleHalberd : public Card_Weapon {
public:
	Card_TripleHalberd(ECardSuit Suit, int number) :Card_Weapon(ECardName::TRIPLEHALBERD, Suit, number) { }
};
#endif // Card_TripleHalberd_h__
