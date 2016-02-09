#ifndef Rule_LuXun_h__
#define Rule_LuXun_h__

#include "Rule_Character.h"
#include "Card\Card.h"

class Rule_LuXun : public Rule_Character {


public:
	std::shared_ptr<Card> removeHandCard(std::shared_ptr<Card> card);

	bool canAsCandidate(Card_Name cardName);
};
#endif // Rule_LuXun_h__
