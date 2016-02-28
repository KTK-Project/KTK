#include "Event_RequestCardSuit.h"

ECardSuit Event_RequestCardSuit::getReceiver() const {
	return m_receiver;
}

void Event_RequestCardSuit::setReceiver(ECardSuit receiver) {
	m_receiver = receiver;
}

void Event_RequestCardSuit::eventResolve() const {
	// TODO - implement Event_RequestCardSuit::eventResolve
	throw "Not yet implemented";
}
