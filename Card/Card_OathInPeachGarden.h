#ifndef Card_OathInPeachGarden_h__
#define Card_OathInPeachGarden_h__

#include "Card_Strategy.h"

class Card_OathInPeachGarden : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(std::shared_ptr<Player> requester);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_OathInPeachGarden_h__
