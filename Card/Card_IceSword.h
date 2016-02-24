#ifndef Card_IceSword_h__
#define Card_IceSword_h__

#include "Card_Weapon.h"
#include "Event\Event_Slash.h"

class Card_IceSword : public Card_Weapon {


public:
	Card_IceSword(ECardSuit Suit, int number) :Card_Weapon(ECardName::ICESWORD, Suit, number) {}
	void eventResolve(const Event_Slash& slashEvent) const;
};
#endif // Card_IceSword_h__
