#ifndef Rule_HuangYueYing_h__
#define Rule_HuangYueYing_h__

#include "Rule_Base.h"
#include "Card\Card.h"

class Rule_HuangYueYing : public Rule_Base {


public:
	int getDistanceForCard(const std::shared_ptr<Card> & card) const;

	void playCard(const std::shared_ptr<Card> & card) const;

	void jiZhi() const;
};
#endif // Rule_HuangYueYing_h__
