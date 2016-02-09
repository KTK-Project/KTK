#ifndef Rule_ZhenJi_h__
#define Rule_ZhenJi_h__

#include "Rule_Character.h"
#include "Event\Event_RequestCard.h"

class Rule_ZhenJi : public Rule_Character {


public:
	void readyStage();

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void qingGuo(std::shared_ptr<Event_RequestCard>& event);

	void luoShen();
};
#endif // Rule_ZhenJi_h__
