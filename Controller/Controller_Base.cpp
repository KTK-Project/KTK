#include "Controller_Base.h"

std::shared_ptr<Event_Base> Controller_Base::getEvent() {
	return this->m_event;
}

void Controller_Base::setEvent(std::shared_ptr<Event_Base> m_event) {
	this->m_event = m_event;
}
