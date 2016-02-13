#include "Event_Interaction.h"

std::shared_ptr<Player> Event_Interaction::getInteractPlayer() const {
	return this->m_interactPlayer;
}

void Event_Interaction::setInteractPlayer(const std::shared_ptr<Player> m_interactPlayer) const {
	this->m_interactPlayer = m_interactPlayer;
}

std::string Event_Interaction::getDescrption() const {
	return this->m_descrption;
}

void Event_Interaction::setDescrption(const std::string m_descrption) const {
	this->m_descrption = m_descrption;
}

bool Event_Interaction::getReceived() const {
	return this->m_received;
}

void Event_Interaction::setReceived(const bool m_received) const {
	this->m_received = m_received;
}

bool Event_Interaction::getReturned() const {
	return this->m_returned;
}

void Event_Interaction::setReturned(const bool m_returned) const {
	this->m_returned = m_returned;
}

std::function<void (const Event_Base&)> Event_Interaction::getReturnCallBack() const {
	return this->m_returnCallBack;
}

void Event_Interaction::setReturnCallBack(const std::function<void (const Event_Base&)> m_returnCallBack) const {
	this->m_returnCallBack = m_returnCallBack;
}

void Event_Interaction::eventResolve() const {
	// TODO - implement Event_Interaction::eventResolve
	throw "Not yet implemented";
}
