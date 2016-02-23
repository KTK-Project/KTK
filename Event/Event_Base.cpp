#include "Event_Base.h"

using std::function;

EEventType Event_Base::getEventType() const {
	return m_eventType;
}

void Event_Base::setEventType(EEventType eventType) {
	m_eventType = eventType;
}

EEventState Event_Base::getEventState() const {
	return m_eventState;
}

void Event_Base::setEventState(EEventState eventState) {
	m_eventState = eventState;
}

const function<void (const Event_Base &)> & Event_Base::getFinishCallBack() const {
	return m_finishCallBack;
}

void Event_Base::setFinishCallBack(const function<void (const Event_Base &)> & finishCallBack) {
	m_finishCallBack = finishCallBack;
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
