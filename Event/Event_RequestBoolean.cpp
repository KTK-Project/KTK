#include "Event_RequestBoolean.h"

bool Event_RequestBoolean::getReceiver() {
	return this->m_receiver;
}

void Event_RequestBoolean::setReceiver(bool m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_RequestBoolean::eventResolve() {
	// TODO - implement Event_RequestBoolean::eventResolve
	throw "Not yet implemented";
}
