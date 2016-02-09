#ifndef Rule_HuangYueYing_h__
#define Rule_HuangYueYing_h__

#include "Rule_Character.h"
#include "Card\Card.h"

class Rule_HuangYueYing : public Rule_Character {


public:
	int getDistanceForCard(std::shared_ptr<Card> card);

	void playCard(std::shared_ptr<Card> card);

	void jiZhi();
};
#endif // Rule_HuangYueYing_h__
