#ifndef Card_DrownInHappiness_h__
#define Card_DrownInHappiness_h__

#include "Card_DelayedStrategy.h"
#include <vector>
#include <memory>
#include "Player\Player.h"

class Card_DrownInHappiness : public Card_DelayedStrategy {
public:
	Card_DrownInHappiness(ECardSuit Suit, int number) : Card_DelayedStrategy(ECardName::DROWNLNHAPPINESS, Suit, number) { }
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;
	std::vector<std::shared_ptr<Player>> getCandidates(const std::shared_ptr<Player> & playCardPlayer) const;
	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_DrownInHappiness_h__
