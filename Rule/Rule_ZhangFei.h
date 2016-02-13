#ifndef Rule_ZhangFei_h__
#define Rule_ZhangFei_h__

#include "Rule_Character.h"

class Rule_ZhangFei : public Rule_Character {


public:
	void readyStage() const;

	void roundEndStage() const;
};
#endif // Rule_ZhangFei_h__
