#ifndef Card_ArrowRain_h__
#define Card_ArrowRain_h__

#include "Card_Strategy.h"

class Card_ArrowRain : public Card_Strategy {


public:
	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_ArrowRain_h__
