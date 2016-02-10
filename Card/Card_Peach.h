#ifndef Card_Peach_h__
#define Card_Peach_h__

#include <vector>
#include "Card_Basic.h"
#include "Player\Player.h"

class Card_Peach : public Card_Basic {


public:
	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_Peach_h__
