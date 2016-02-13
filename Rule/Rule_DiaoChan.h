#ifndef Rule_DiaoChan_h__
#define Rule_DiaoChan_h__

#include "Rule_Character.h"

class Rule_DiaoChan : public Rule_Character {


public:
	void playCardStage() const;

	void roundEndStage() const;

	void biYue() const;

	void liJian() const;
};
#endif // Rule_DiaoChan_h__
