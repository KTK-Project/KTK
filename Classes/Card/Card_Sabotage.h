#ifndef Card_Sabotage_h__
#define Card_Sabotage_h__

#include <vector>
#include "Card_Strategy.h"
#include "Player\Player.h"

class Card_Sabotage : public Card_Strategy {
public:
	Card_Sabotage(ECardSuit Suit, int number) :Card_Strategy(ECardName::SABOTAGE, Suit, number) {}
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;
	std::vector<std::shared_ptr<Player>> getCandidates(const std::shared_ptr<Player> & playCardPlayer) const;
	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_Sabotage_h__
