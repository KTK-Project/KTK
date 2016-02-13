#ifndef Rule_ZhaoYun_h__
#define Rule_ZhaoYun_h__

#include "Rule_Character.h"

class Rule_ZhaoYun : public Rule_Character {


public:
	void playCardStage() const;

	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void afterProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void longDan(const std::shared_ptr<Event_Base>& event) const;
};
#endif // Rule_ZhaoYun_h__
