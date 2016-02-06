#ifndef UI_Harvest_h__
#define UI_Harvest_h__


class UI_Harvest {

private:
	vector<UI_Card*> m_cards;
	vector<Player*> m_players;

public:
	bool initWithCards(vector<Card*> cards);

	void chosedCard(Player* player, Card* card);

	void chosedCard(Player* player, UI_Card* card);
};
#endif // UI_Harvest_h__
