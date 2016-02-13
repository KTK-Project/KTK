#ifndef Card_Lightning_h__
#define Card_Lightning_h__

#include "Card_DelayedStrategy.h"
#include <memory>
#include "Player\Player.h"
#include <vector>

class Card_Lightning : public Card_DelayedStrategy {


public:
	int getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const;

	void useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const;
};
#endif // Card_Lightning_h__
