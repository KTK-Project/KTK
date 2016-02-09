#ifndef Rule_XuChu_h__
#define Rule_XuChu_h__

#include "Rule_Character.h"
#include "Event\Event_Hurt.h"

class Rule_XuChu : public Rule_Character {

public:
	bool m_usingLuoYi;

	void drawCardStage();

	void roundEndStage();

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void luoYi(std::shared_ptr<Event_Hurt>& event);
};
#endif // Rule_XuChu_h__
