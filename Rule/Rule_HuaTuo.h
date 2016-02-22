#ifndef Rule_HuaTuo_h__
#define Rule_HuaTuo_h__

#include "Rule_Base.h"

class Rule_HuaTuo : public Rule_Base {


public:
	void playCardStage() const;

	void beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const;

	void qingNang() const;

	void jiJiu(const std::shared_ptr<Event_Base>& event) const;
};
#endif // Rule_HuaTuo_h__
