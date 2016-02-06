#ifndef Card_Sabotage_h__
#define Card_Sabotage_h__


class Card_Sabotage : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	vector<Player*> getCandidate(Player* playCardPlayer);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_Sabotage_h__
