#include "Event_Base.h"

Event_Type Event_Base::getEventType() {
	// TODO - implement Event_Base::getEventType
	throw "Not yet implemented";
}

void Event_Base::setEventType(Event_Type eventType) {
	// TODO - implement Event_Base::setEventType
	throw "Not yet implemented";
}

Event_State Event_Base::getEventState() {
	return this->m_eventState;
}

void Event_Base::setEventState(Event_State m_eventState) {
	this->m_eventState = m_eventState;
}

std::function<void (Event_Base&)> Event_Base::getFinishCallBack() {
	return this->m_finishCallBack;
}

void Event_Base::setFinishCallBack(std::function<void (Event_Base&)> m_finishCallBack) {
	this->m_finishCallBack = m_finishCallBack;
}

void Event_Base::finish() {
	// TODO - implement Event_Base::finish
	throw "Not yet implemented";
}

void Event_Base::eventResolve() {
	// TODO - implement Event_Base::eventResolve
	throw "Not yet implemented";
}
