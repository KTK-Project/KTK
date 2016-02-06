#ifndef Rule_ZhuGeLiang_h__
#define Rule_ZhuGeLiang_h__


class Rule_ZhuGeLiang : public Rule_Character {


public:
	void readyStage();

	bool canAsCandidate(Card* card);

	void guanXing();
};
#endif // Rule_ZhuGeLiang_h__
