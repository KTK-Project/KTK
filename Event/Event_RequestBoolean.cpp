#include "Event_RequestBoolean.h"

bool Event_RequestBoolean::getReceiver() const {
	return this->m_receiver;
}

void Event_RequestBoolean::setReceiver(const bool m_receiver) const {
	this->m_receiver = m_receiver;
}

void Event_RequestBoolean::eventResolve() const {
	// TODO - implement Event_RequestBoolean::eventResolve
	throw "Not yet implemented";
}
