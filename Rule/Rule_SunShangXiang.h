#ifndef Rule_SunShangXiang_h__
#define Rule_SunShangXiang_h__

#include "Rule_Character.h"
#include "Card\Card.h"

class Rule_SunShangXiang : public Rule_Character {


public:
	void playCardStage();

	void unequip(std::shared_ptr<Card> card);

	void jieYin();
};
#endif // Rule_SunShangXiang_h__
