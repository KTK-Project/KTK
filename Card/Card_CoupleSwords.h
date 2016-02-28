#ifndef Card_CoupleSwords_h__
#define Card_CoupleSwords_h__

#include "Card_Weapon.h"
#include "Event\Event_Slash.h"



class Card_CoupleSwords : public Card_Weapon {
public:
	Card_CoupleSwords(ECardSuit Suit, int number) : Card_Weapon(ECardName::COUPLESWORDS, Suit, number) { }
	void eventResolve(const Event_Slash & slashEvent) const;
};
#endif // Card_CoupleSwords_h__
