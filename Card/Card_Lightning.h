#ifndef Card_Lightning_h__
#define Card_Lightning_h__

#include "Card_DelayedStrategy.h"
#include <memory>
#include "Player\Player.h"
#include <vector>

class Card_Lightning : public Card_DelayedStrategy {


public:
	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_Lightning_h__
