#ifndef Card_ArrowRain_h__
#define Card_ArrowRain_h__


class Card_ArrowRain : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_ArrowRain_h__
