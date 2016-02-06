#ifndef Rule_LuXun_h__
#define Rule_LuXun_h__


class Rule_LuXun : public Rule_Character {


public:
	Card* removeHandCard(Card* card);

	bool canAsCandidate(Card_Name cardName);
};
#endif // Rule_LuXun_h__
