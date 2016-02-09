#ifndef Card_h__
#define Card_h__

#include "Manager\KTK_Enum.h"
#include <memory>
#include "Player\Player.h"
#include <vector>

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

	int getM_goalPlayerQuantity(std::shared_ptr<Player> requester);

	std::vector<std::shared_ptr<Player>> getCandidate(std::shared_ptr<Player> playCardPlayer);

	void onUpping();

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_h__
