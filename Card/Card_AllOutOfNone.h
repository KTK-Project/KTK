#ifndef Card_AllOutOfNone_h__
#define Card_AllOutOfNone_h__

#include "Card_Strategy.h"


class Card_AllOutOfNone : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(std::shared_ptr<Player> requester);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_AllOutOfNone_h__
