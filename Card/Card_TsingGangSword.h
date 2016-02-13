#ifndef Card_TsingGangSword_h__
#define Card_TsingGangSword_h__

#include "Card_Weapon.h"
#include "Event\Event_Slash.h"

class Card_TsingGangSword : public Card_Weapon {


public:
	void eventResolve(const Event_Slash& slashEvent) const;
};
#endif // Card_TsingGangSword_h__
