#ifndef Rule_CaoCao_h__
#define Rule_CaoCao_h__

#include <memory>
#include "Rule_Character.h"
#include "Event\Event_RequestCard.h"
#include "Event\Event_Base.h"
#include "Event\Event_Hurt.h"

class Rule_CaoCao : public Rule_Character {

public:
	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void huJia(const std::shared_ptr<Event_RequestCard>& event) const;

	void jianXiong(const std::shared_ptr<Event_Hurt>& event) const;
};
#endif // Rule_CaoCao_h__
