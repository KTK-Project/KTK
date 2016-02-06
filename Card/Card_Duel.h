#ifndef Card_Duel_h__
#define Card_Duel_h__


class Card_Duel : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_Duel_h__
