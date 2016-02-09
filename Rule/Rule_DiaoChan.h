#ifndef Rule_DiaoChan_h__
#define Rule_DiaoChan_h__

#include "Rule_Character.h"

class Rule_DiaoChan : public Rule_Character {


public:
	void playCardStage();

	void roundEndStage();

	void biYue();

	void liJian();
};
#endif // Rule_DiaoChan_h__
