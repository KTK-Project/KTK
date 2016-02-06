#ifndef Card_Lightning_h__
#define Card_Lightning_h__


class Card_Lightning : public Card_DelayedStrategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_Lightning_h__
