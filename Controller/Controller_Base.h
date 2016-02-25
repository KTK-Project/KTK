#ifndef Controller_Base_h__
#define Controller_Base_h__
//	Todo:stl
#include <memory>
#include "Event\Event_Base.h"

class Controller_Base {

private:
	std::shared_ptr<Event_Base> m_event;

public:
	std::shared_ptr<Event_Base> getEvent() const;

	void setEvent(const std::shared_ptr<Event_Base> m_event) const;
};
#endif // Controller_Base_h__
