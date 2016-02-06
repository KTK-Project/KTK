#ifndef Card_DrownInHappiness_h__
#define Card_DrownInHappiness_h__


class Card_DrownInHappiness : public Card_DelayedStrategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	vector<Player*> getCandidate(Player* playCardPlayer);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_DrownInHappiness_h__
