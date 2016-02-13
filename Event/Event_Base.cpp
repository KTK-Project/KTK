#include "Event_Base.h"

EEventType Event_Base::getEventType() const {
	// TODO - implement Event_Base::getEventType
	throw "Not yet implemented";
}

void Event_Base::setEventType(const EEventType eventType) const {
	// TODO - implement Event_Base::setEventType
	throw "Not yet implemented";
}

EEventState Event_Base::getEventState() const {
	return this->m_eventState;
}

void Event_Base::setEventState(const EEventState m_eventState) const {
	this->m_eventState = m_eventState;
}

std::function<void (const Event_Base&)> Event_Base::getFinishCallBack() const {
	return this->m_finishCallBack;
}

void Event_Base::setFinishCallBack(const std::function<void (const Event_Base&)> m_finishCallBack) const {
	this->m_finishCallBack = m_finishCallBack;
}

void Event_Base::finish() const {
	// TODO - implement Event_Base::finish
	throw "Not yet implemented";
}

void Event_Base::eventResolve() const {
	//µ÷ÓÃfinishCallback
	// TODO - implement Event_Base::eventResolve
	throw "Not yet implemented";
}
