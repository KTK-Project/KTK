#ifndef Rule_ZhangLiao_h__
#define Rule_ZhangLiao_h__

#include "Rule_Character.h"

class Rule_ZhangLiao : public Rule_Character {


public:
	void drawCardStage() const;

	void tuXi() const;
};
#endif // Rule_ZhangLiao_h__
