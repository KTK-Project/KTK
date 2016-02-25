#ifndef Card_JusticeShield_h__
#define Card_JusticeShield_h__

#include "Card_Armor.h"
#include "Event\Event_Slash.h"

class Card_JusticeShield : public Card_Armor {
public:
	Card_JusticeShield(ECardSuit Suit, int number) : Card_Armor(ECardName::JUSTICESHIELD, Suit, number) { }
	void eventResolve(const Event_Slash& slashEvent) const;
};
#endif // Card_JusticeShield_h__
