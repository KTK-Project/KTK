#ifndef Rule_DaQiao_h__
#define Rule_DaQiao_h__

#include <memory>
#include "Rule_Character.h"
#include "Event\Event_Base.h"

class Rule_DaQiao : public Rule_Character {


public:
	void playCardStage() const;

	void guoSe() const;

	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void liuLi(const std::shared_ptr<Event_Base>& event) const;
};
#endif // Rule_DaQiao_h__
