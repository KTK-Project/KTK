#ifndef Rule_XuChu_h__
#define Rule_XuChu_h__

#include "Rule_Base.h"
#include "Event\Event_Hurt.h"

class Rule_XuChu : public Rule_Base {
public:
	void drawCardStage() const;
	void roundEndStage() const;
	void beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const;
	void luoYi(const std::shared_ptr<Event_Hurt>& event) const;
private:
	bool m_usingLuoYi;
};
#endif // Rule_XuChu_h__
