#ifndef Card_KylinBow_h__
#define Card_KylinBow_h__

#include "Card_Weapon.h"
#include "Event\Event_Slash.h"

class Card_KylinBow : public Card_Weapon {


public:
	Card_KylinBow(ECardSuit Suit, int number) :Card_Weapon(ECardName::KYLINBOW, Suit, number) { }
	void eventResolve(const Event_Slash& slashEvent) const;
};
#endif // Card_KylinBow_h__
