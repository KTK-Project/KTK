#include "Event_Interaction.h"

std::shared_ptr<Player> Event_Interaction::getInteractPlayer() {
	return this->m_interactPlayer;
}

void Event_Interaction::setInteractPlayer(std::shared_ptr<Player> m_interactPlayer) {
	this->m_interactPlayer = m_interactPlayer;
}

std::string Event_Interaction::getDescrption() {
	return this->m_descrption;
}

void Event_Interaction::setDescrption(std::string m_descrption) {
	this->m_descrption = m_descrption;
}

bool Event_Interaction::getReceived() {
	return this->m_received;
}

void Event_Interaction::setReceived(bool m_received) {
	this->m_received = m_received;
}

bool Event_Interaction::getReturned() {
	return this->m_returned;
}

void Event_Interaction::setReturned(bool m_returned) {
	this->m_returned = m_returned;
}

std::function<void (Event_Base&)> Event_Interaction::getReturnCallBack() {
	return this->m_returnCallBack;
}

void Event_Interaction::setReturnCallBack(std::function<void (Event_Base&)> m_returnCallBack) {
	this->m_returnCallBack = m_returnCallBack;
}

void Event_Interaction::eventResolve() {
	// TODO - implement Event_Interaction::eventResolve
	throw "Not yet implemented";
}
