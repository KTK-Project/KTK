#ifndef UI_Harvest_h__
#define UI_Harvest_h__

#include <vector>
#include <memory>
#include "UI_Card.h"
#include "Player/Player.h"

class UI_Harvest {

private:
	std::vector<UI_Card*> m_cards;
	std::vector<std::shared_ptr<Player>> m_players;

public:
	bool initWithCards(std::vector<std::shared_ptr<Card>> cards);

	void chosedCard(std::shared_ptr<Player> player, std::shared_ptr<Card> card);

	void chosedCard(std::shared_ptr<Player> player, UI_Card* card);
};
#endif // UI_Harvest_h__
