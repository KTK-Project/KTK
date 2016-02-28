#ifndef Controller_Base_h__
#define Controller_Base_h__

#include <memory>
#include "Event\Event_Base.h"

class Controller_Base {
public:
	const std::shared_ptr<Event_Base> & getEvent() const;
	void setEvent(const std::shared_ptr<Event_Base> & event);
private:
	std::shared_ptr<Event_Base> m_event;
};
#endif // Controller_Base_h__
