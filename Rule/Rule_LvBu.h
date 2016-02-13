#ifndef Rule_LvBu_h__
#define Rule_LvBu_h__

#include "Rule_Character.h"

class Rule_LvBu : public Rule_Character {


public:
	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void wuShuang(const std::shared_ptr<Event_Base>& event) const;
};
#endif // Rule_LvBu_h__
