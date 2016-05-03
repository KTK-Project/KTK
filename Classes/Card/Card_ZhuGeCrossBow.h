#ifndef Card_ZhuGeCrossBow_h__
#define Card_ZhuGeCrossBow_h__

#include "Card_Weapon.h"

class Card_ZhuGeCrossBow : public Card_Weapon {
public:
	Card_ZhuGeCrossBow(ECardSuit Suit, int number) : Card_Weapon(ECardName::ZHUGECROSSBOW, Suit, number) { }
};
#endif // Card_ZhuGeCrossBow_h__
