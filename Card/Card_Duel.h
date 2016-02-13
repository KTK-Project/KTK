#ifndef Card_Duel_h__
#define Card_Duel_h__

#include "Card_Strategy.h"

class Card_Duel : public Card_Strategy {


public:
	int getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const;

	void useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const;
};
#endif // Card_Duel_h__
