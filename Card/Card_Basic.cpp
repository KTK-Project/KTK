#include "Card_Basic.h"

Card_Basic::Card_Basic(ECardName name, ECardSuit suit, int number) : Card(name, suit, number) {
	Card::setType(ECardType::BASIC);
}
