#ifndef Rule_SunShangXiang_h__
#define Rule_SunShangXiang_h__


class Rule_SunShangXiang : public Rule_Character {


public:
	void playCardStage();

	void unequip(Card* card);

	void jieYin();
};
#endif // Rule_SunShangXiang_h__
