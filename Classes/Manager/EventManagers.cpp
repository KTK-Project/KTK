#include "EventManagers.h"

using std::stack;
using std::shared_ptr;

void EventManagers::resolveEvent() const {
	//ÊÂ¼şµÄeventResolve
	// TODO - implement EventManagers::resolveEvent
	throw "Not yet implemented";
}

stack<shared_ptr<Event_Base>> & EventManagers::getEventsStack() {
	return m_eventsStack;
}

bool EventManagers::hasActions() const {
	return m_actions;
}

void EventManagers::increaseActions() {
	m_actions++;
}

void EventManagers::decreaseActions() {
	m_actions--;
}
