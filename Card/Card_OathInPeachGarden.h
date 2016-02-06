#ifndef Card_OathInPeachGarden_h__
#define Card_OathInPeachGarden_h__


class Card_OathInPeachGarden : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_OathInPeachGarden_h__
