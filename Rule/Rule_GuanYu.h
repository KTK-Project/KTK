#ifndef Rule_GuanYu_h__
#define Rule_GuanYu_h__

#include "Rule_Character.h"

class Rule_GuanYu : public Rule_Character {


public:
	void playCardStage() const;

	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void afterProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void wuSheng() const;
};
#endif // Rule_GuanYu_h__
