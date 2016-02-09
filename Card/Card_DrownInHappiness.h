#ifndef Card_DrownInHappiness_h__
#define Card_DrownInHappiness_h__

#include "Card_DelayedStrategy.h"
#include <vector>
#include <memory>
#include "Player\Player.h"

class Card_DrownInHappiness : public Card_DelayedStrategy {


public:
	int getM_goalPlayerQuantity(std::shared_ptr<Player> requester);

	std::vector<std::shared_ptr<Player>> getCandidate(std::shared_ptr<Player> playCardPlayer);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_DrownInHappiness_h__
