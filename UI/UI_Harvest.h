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
	bool initWithCards(const std::vector<std::shared_ptr<Card>> cards) const;

	void chosedCard(const std::shared_ptr<Player> player, const std::shared_ptr<Card> card) const;

	void chosedCard(const std::shared_ptr<Player> player, const UI_Card* card) const;
};
#endif // UI_Harvest_h__
