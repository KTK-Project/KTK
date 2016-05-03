#include "Event_RequestBoolean.h"

bool Event_RequestBoolean::getReceiver() const {
	return m_receiver;
}

void Event_RequestBoolean::setReceiver(bool receiver) {
	m_receiver = receiver;
}

void Event_RequestBoolean::eventResolve() const {
	// TODO - implement Event_RequestBoolean::eventResolve
	throw "Not yet implemented";
}
