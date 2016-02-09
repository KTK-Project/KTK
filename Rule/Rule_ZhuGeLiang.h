#ifndef Rule_ZhuGeLiang_h__
#define Rule_ZhuGeLiang_h__

#include "Rule_Character.h"
#include "Card\Card.h"

class Rule_ZhuGeLiang : public Rule_Character {


public:
	void readyStage();

	bool canAsCandidate(std::shared_ptr<Card> card);

	void guanXing();
};
#endif // Rule_ZhuGeLiang_h__
