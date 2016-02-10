#ifndef Controller_Base_h__
#define Controller_Base_h__

#include <memory>
#include "Event\Event_Base.h"

class Controller_Base {

private:
	std::shared_ptr<Event_Base> m_event;

public:
	std::shared_ptr<Event_Base> getEvent();

	void setEvent(std::shared_ptr<Event_Base> m_event);
};
#endif // Controller_Base_h__
