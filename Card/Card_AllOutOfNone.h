#ifndef Card_AllOutOfNone_h__
#define Card_AllOutOfNone_h__


class Card_AllOutOfNone : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_AllOutOfNone_h__
