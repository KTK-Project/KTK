#ifndef Card_SnakeSpear_h__
#define Card_SnakeSpear_h__

#include "Card_Weapon.h"

class Card_SnakeSpear : public Card_Weapon {
public:
	Card_SnakeSpear(ECardSuit Suit, int number) :Card_Weapon(ECardName::SNAKESPEAR, Suit, number) {}
};
#endif // Card_SnakeSpear_h__
