#ifndef Card_Duel_h__
#define Card_Duel_h__

#include "Card_Strategy.h"

class Card_Duel : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(std::shared_ptr<Player> requester);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_Duel_h__
