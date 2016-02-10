#ifndef UI_TheftAndSabotage_h__
#define UI_TheftAndSabotage_h__

#include <memory>
#include <vector>
#include "Player/Player.h"
#include "Card/Card.h"
#include "Manager/KTK_Enum.h"
#include "UI_Card.h"

class UI_TheftAndSabotage {

private:
	std::shared_ptr<Player> m_player;
	std::vector<UI_Card*> m_cards;
	std::shared_ptr<Card> m_selectedCard;

public:
	bool initWithPlayer(std::shared_ptr<Player> player, Card_Name cardName);

	std::shared_ptr<Card> getSelectedCard();

	void setSelectedCard(std::shared_ptr<Card> m_selectedCard);
};
#endif // UI_TheftAndSabotage_h__
