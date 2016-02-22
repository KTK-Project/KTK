#include "Card_DelayedStrategy.h"

Card_DelayedStrategy::Card_DelayedStrategy(ECardName name, ECardSuit suit, int number) : Card(name, suit, number) {
	setType(ECardType::DELAYEDSTRATEGY);
}

