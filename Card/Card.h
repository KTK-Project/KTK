#ifndef Card_h__
#define Card_h__

#include <memory>
#include <vector>
#include "Manager\KTK_Enum.h"

class Player;

class Card {

private:
	ECardName m_name;
	ECardColor m_color;
	ECardSuit m_suit;
	ECardType m_type;

public:
	ECardColor getColor() const;

	ECardName getName() const;

	ECardSuit getSuit() const;

	ECardType getType() const;

	int getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const;

	std::vector<std::shared_ptr<Player>> getCandidate(const std::shared_ptr<Player> playCardPlayer) const;

	void onUpping() const;

	void useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const;
};
#endif // Card_h__
