#ifndef Card_SouthInvasion_h__
#define Card_SouthInvasion_h__


class Card_SouthInvasion : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_SouthInvasion_h__
