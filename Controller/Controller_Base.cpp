#include "Controller_Base.h"

std::shared_ptr<Event_Base> Controller_Base::getM_event() {
	return this->m_event;
}

void Controller_Base::setM_event(std::shared_ptr<Event_Base> m_event) {
	this->m_event = m_event;
}