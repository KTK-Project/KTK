#ifndef Rule_GuoJia_h__
#define Rule_GuoJia_h__

#include "Rule_Character.h"
#include "Event\Event_Hurt.h"
#include "Event\Event_Judge.h"

class Rule_GuoJia : public Rule_Character {


public:
	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void tianDu(std::shared_ptr<Event_Judge>& event);

	void yiJi(std::shared_ptr<Event_Hurt>& event);
};
#endif // Rule_GuoJia_h__
