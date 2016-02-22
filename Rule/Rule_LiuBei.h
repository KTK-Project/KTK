#ifndef Rule_LiuBei_h__
#define Rule_LiuBei_h__

#include "Rule_Base.h"

class Rule_LiuBei : public Rule_Base {


public:
	void drawCardStage() const;

	void beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const;

	void jiJiang(const std::shared_ptr<Event_Base>& event) const;
};
#endif // Rule_LiuBei_h__
