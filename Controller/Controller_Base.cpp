#include "Controller_Base.h"

std::shared_ptr<Event_Base> Controller_Base::getEvent() const {
	return this->m_event;
}

void Controller_Base::setEvent(const std::shared_ptr<Event_Base> m_event) const {
	throw "Not yet implemented";
}
