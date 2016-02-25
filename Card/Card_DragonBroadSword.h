#ifndef Card_DragonBroadSword_h__
#define Card_DragonBroadSword_h__

#include "Card_Weapon.h"
#include "Event\Event_Slash.h"

class Card_DragonBroadSword : public Card_Weapon {
public:
	Card_DragonBroadSword(ECardSuit Suit, int number) : Card_Weapon(ECardName::DRAGONBROADSWORD, Suit, number) { }
	void eventResolve(const Event_Slash & slashEvent) const;
};
#endif // Card_DragonBroadSword_h__
