#ifndef Card_JusticeShield_h__
#define Card_JusticeShield_h__

#include "Card_Armor.h"
#include "Event\Event_Slash.h"

class Card_JusticeShield : public Card_Armor {


public:
	void eventResolve(Event_Slash& slashEvent);
};
#endif // Card_JusticeShield_h__
