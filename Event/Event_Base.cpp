#include "Event_Base.h"

using std::function;

//	Todo:stl
EEventType Event_Base::getEventType() const {
	// TODO - implement Event_Base::getEventType
	throw "Not yet implemented";
}

//	Todo:stl
void Event_Base::setEventType(EEventType eventType) {
	// TODO - implement Event_Base::setEventType
	throw "Not yet implemented";
}

//	Todo:stl
EEventState Event_Base::getEventState() const {
	return this->m_eventState;
}

//	Todo:stl
void Event_Base::setEventState(EEventState eventState) {
	throw "Not yet implemented";
}

//	Todo:stl
const function<void (const Event_Base &)> & Event_Base::getFinishCallBack() const {
	return this->m_finishCallBack;
}

//	Todo:stl
void Event_Base::setFinishCallBack(const function<void (const Event_Base &)> & finishCallBack) {
	throw "Not yet implemented";
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
