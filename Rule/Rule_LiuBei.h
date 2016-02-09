#ifndef Rule_LiuBei_h__
#define Rule_LiuBei_h__

#include "Rule_Character.h"

class Rule_LiuBei : public Rule_Character {


public:
	void drawCardStage();

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void jiJiang(std::shared_ptr<Event_Base>& event);
};
#endif // Rule_LiuBei_h__
