#ifndef Card_DragonBroadSword_h__
#define Card_DragonBroadSword_h__

#include "Card_Weapon.h"
#include "Event\Event_Slash.h"

class Card_DragonBroadSword : public Card_Weapon {


public:
	void eventResolve(Event_Slash& slashEvent);
};
#endif // Card_DragonBroadSword_h__
