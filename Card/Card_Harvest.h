#ifndef Card_Harvest_h__
#define Card_Harvest_h__


class Card_Harvest : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_Harvest_h__
