#ifndef Rule_SunShangXiang_h__
#define Rule_SunShangXiang_h__

#include "Rule_Base.h"
#include "Card\Card.h"

class Rule_SunShangXiang : public Rule_Base {
public:
	void playCardStage() const;
	void unequip(const std::shared_ptr<Card> & card) const;
	void jieYin() const;
};
#endif // Rule_SunShangXiang_h__
