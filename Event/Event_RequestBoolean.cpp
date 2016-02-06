#include "Event_RequestBoolean.h"

bool Event_RequestBoolean::getM_receiver() {
	return this->m_receiver;
}

void Event_RequestBoolean::setM_receiver(bool m_receiver) {
	this->m_receiver = m_receiver;
}

void Event_RequestBoolean::eventResolve() {
	// TODO - implement Event_RequestBoolean::eventResolve
	throw "Not yet implemented";
}
