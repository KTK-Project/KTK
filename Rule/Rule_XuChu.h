#ifndef Rule_XuChu_h__
#define Rule_XuChu_h__

#include "Rule_Character.h"
#include "Event\Event_Hurt.h"

class Rule_XuChu : public Rule_Character {

public:
	bool m_usingLuoYi;

	void drawCardStage() const;

	void roundEndStage() const;

	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void luoYi(const std::shared_ptr<Event_Hurt>& event) const;
};
#endif // Rule_XuChu_h__
