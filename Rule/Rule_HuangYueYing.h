#ifndef Rule_HuangYueYing_h__
#define Rule_HuangYueYing_h__


class Rule_HuangYueYing : public Rule_Character {


public:
	int getDistanceForCard(Card* card);

	void playCard(Card* card);

	void jiZhi();
};
#endif // Rule_HuangYueYing_h__
