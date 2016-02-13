#ifndef Rule_LuXun_h__
#define Rule_LuXun_h__

#include "Rule_Character.h"
#include "Card\Card.h"

class Rule_LuXun : public Rule_Character {


public:
	std::shared_ptr<Card> removeHandCard(const std::shared_ptr<Card> card) const;

	bool canAsCandidate(const ECardName cardName) const;
};
#endif // Rule_LuXun_h__
