#ifndef Rule_ZhenJi_h__
#define Rule_ZhenJi_h__

#include "Rule_Character.h"
#include "Event\Event_RequestCard.h"

class Rule_ZhenJi : public Rule_Character {


public:
	void readyStage() const;

	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void qingGuo(const std::shared_ptr<Event_RequestCard>& event) const;

	void luoShen() const;
};
#endif // Rule_ZhenJi_h__
