#ifndef Card_IceSword_h__
#define Card_IceSword_h__

#include "Card_Weapon.h"
#include "Event\Event_Slash.h"

class Card_IceSword : public Card_Weapon {


public:
	void eventResolve(Event_Slash& slashEvent);
};
#endif // Card_IceSword_h__
