#ifndef Rule_SiMaYi_h__
#define Rule_SiMaYi_h__

#include "Rule_Character.h"
#include "Event\Event_Hurt.h"
#include "Event\Event_Judge.h"

class Rule_SiMaYi : public Rule_Character {


public:
	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void fanKui(std::shared_ptr<Event_Hurt>& event);

	void guiCai(std::shared_ptr<Event_Judge>& event);
};
#endif // Rule_SiMaYi_h__
