#ifndef Rule_ZhouYu_h__
#define Rule_ZhouYu_h__

#include "Rule_Base.h"

class Rule_ZhouYu : public Rule_Base {


public:
	void drawCardStage() const;

	void playCardStage() const;

	void fanJian() const;
};
#endif // Rule_ZhouYu_h__
