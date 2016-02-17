#ifndef Rule_ZhuGeLiang_h__
#define Rule_ZhuGeLiang_h__

#include "Rule_Base.h"
#include "Card\Card.h"

class Rule_ZhuGeLiang : public Rule_Base {


public:
	void readyStage() const;

	bool canAsCandidate(const std::shared_ptr<Card> card) const;

	void guanXing() const;
};
#endif // Rule_ZhuGeLiang_h__
