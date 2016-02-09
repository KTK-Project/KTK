#ifndef Rule_HuaTuo_h__
#define Rule_HuaTuo_h__

#include "Rule_Character.h"

class Rule_HuaTuo : public Rule_Character {


public:
	void playCardStage();

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void qingNang();

	void jiJiu(std::shared_ptr<Event_Base>& event);
};
#endif // Rule_HuaTuo_h__
