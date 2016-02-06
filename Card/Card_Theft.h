#ifndef Card_Theft_h__
#define Card_Theft_h__


class Card_Theft : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	vector<Player*> getCandidate(Player* playCardPlayer);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_Theft_h__
