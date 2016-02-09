#ifndef Card_BaGuaRank_h__
#define Card_BaGuaRank_h__

#include "Card_Armor.h"
#include "Event\Event_RequestCard.h"

class Card_BaGuaRank : public Card_Armor {


public:
	void eventResolve(Event_RequestCard& event);
};
#endif // Card_BaGuaRank_h__
