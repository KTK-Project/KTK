#ifndef Rule_GuoJia_h__
#define Rule_GuoJia_h__

#include "Rule_Character.h"
#include "Event\Event_Hurt.h"
#include "Event\Event_Judge.h"

class Rule_GuoJia : public Rule_Character {


public:
	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void tianDu(const std::shared_ptr<Event_Judge>& event) const;

	void yiJi(const std::shared_ptr<Event_Hurt>& event) const;
};
#endif // Rule_GuoJia_h__
