#ifndef Card_Peach_h__
#define Card_Peach_h__


class Card_Peach : Card_Basic {


public:
	int getM_goalPlayerQuantity(Player* requester);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_Peach_h__
