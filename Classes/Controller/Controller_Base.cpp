#include "Controller_Base.h"

std::shared_ptr<Event_Base> Controller_Base::getEvent() const {
	return m_event.lock();
}

void Controller_Base::setEvent(const std::shared_ptr<Event_Base> & event) {
	m_event = event;
}
