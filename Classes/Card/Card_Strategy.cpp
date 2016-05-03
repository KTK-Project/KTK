#include "Card_Strategy.h"

Card_Strategy::Card_Strategy(ECardName name, ECardSuit suit, int number) : Card(name, suit, number) {
	Card::setType(ECardType::STRATEGY);
}
