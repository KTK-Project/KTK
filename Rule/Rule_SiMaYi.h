#ifndef Rule_SiMaYi_h__
#define Rule_SiMaYi_h__

#include "Rule_Base.h"
#include "Event\Event_Hurt.h"
#include "Event\Event_Judge.h"

class Rule_SiMaYi : public Rule_Base {
public:
	void beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const;
	void fanKui(const std::shared_ptr<Event_Hurt>& event) const;
	void guiCai(const std::shared_ptr<Event_Judge>& event) const;
};
#endif // Rule_SiMaYi_h__
