#ifndef Card_h__
#define Card_h__

#include <memory>
#include <vector>
#include "Manager\KTK_Enum.h"

class Player;

class Card {

private:
	Card_Name m_name;
	Card_Color m_color;
	Card_Suit m_suit;
	Card_Type m_type;

public:
	Card_Color getColor() const;

	Card_Name getName() const;

	Card_Suit getSuit() const;

	Card_Type getType() const;

	int getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const;

	std::vector<std::shared_ptr<Player>> getCandidate(const std::shared_ptr<Player> playCardPlayer) const;

	void onUpping() const;

	void useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const;
};
#endif // Card_h__
