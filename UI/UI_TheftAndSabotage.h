#ifndef UI_TheftAndSabotage_h__
#define UI_TheftAndSabotage_h__

#include "Manager/KTKHeader.h"
#include "cocos2d.h"


class UI_TheftAndSabotage : public cocos2d::Node {
public:
	bool initWithPlayer(Player* player, Card_Name cardName);
	Card* getM_selectedCard();
	void setM_selectedCard(Card* m_selectedCard);

private:
	Player* m_player;
	vector<UI_Card*> m_cards;
	Card* m_selectedCard;
};
#endif // UI_TheftAndSabotage_h__
