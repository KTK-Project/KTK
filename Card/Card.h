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
	Card_Color getColor();

	Card_Name getName();

	Card_Suit getSuit();

	Card_Type getType();

	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	std::vector<std::shared_ptr<Player>> getCandidate(std::shared_ptr<Player> playCardPlayer);

	void onUpping();

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_h__
