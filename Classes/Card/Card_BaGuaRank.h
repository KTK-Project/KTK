#ifndef Card_BaGuaRank_h__
#define Card_BaGuaRank_h__

#include "Card_Armor.h"
#include "Event\Event_RequestCard.h"

class Card_BaGuaRank : public Card_Armor {
public:
	Card_BaGuaRank(ECardSuit Suit, int number) : Card_Armor(ECardName::BAGUARANK, Suit, number) { }
	void eventResolve(const Event_RequestCard & event) const;
};
#endif // Card_BaGuaRank_h__
