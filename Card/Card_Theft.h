

#ifndef Card_Theft_h__
#define Card_Theft_h__

#include "Card_Strategy.h"
#include <vector>
#include <memory>
#include "Player\Player.h"

class Card_Theft : public Card_Strategy {


public:
	Card_Theft(ECardSuit Suit, int number) : Card_Strategy(ECardName::THEFT, Suit, number) {}
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;

	std::vector<std::shared_ptr<Player>> getCandidates(const std::shared_ptr<Player> & playCardPlayer) const;

	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;
};
#endif // Card_Theft_h__
