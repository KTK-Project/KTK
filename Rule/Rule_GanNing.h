#ifndef Rule_GanNing_h__
#define Rule_GanNing_h__

#include "Rule_Character.h"
#include "Card\Card.h"

class Rule_GanNing : public Rule_Character {

public:
	void playCard(const std::shared_ptr<Card> card) const;

	void qiXi() const;
};
#endif // Rule_GanNing_h__
