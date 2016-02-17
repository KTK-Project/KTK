#include "Event_Interaction.h"

std::shared_ptr<Player> Event_Interaction::getInteractPlayer() const {
	return this->m_interactPlayer;
}

void Event_Interaction::setInteractPlayer(const std::shared_ptr<Player> m_interactPlayer) const {
	throw "Not yet implemented";
}

std::string Event_Interaction::getDescrption() const {
	return this->m_descrption;
}

void Event_Interaction::setDescrption(const std::string m_descrption) const {
	throw "Not yet implemented";
}

bool Event_Interaction::getReceived() const {
	return this->m_received;
}

void Event_Interaction::setReceived(const bool m_received) const {
	throw "Not yet implemented";
}

bool Event_Interaction::getReturned() const {
	return this->m_returned;
}

void Event_Interaction::setReturned(const bool m_returned) const {
	throw "Not yet implemented";
}

std::function<void (const Event_Base&)> Event_Interaction::getReturnCallBack() const {
	return this->m_returnCallBack;
}

void Event_Interaction::setReturnCallBack(const std::function<void (const Event_Base&)> m_returnCallBack) const {
	throw "Not yet implemented";
}

void Event_Interaction::eventResolve() const {
	// TODO - implement Event_Interaction::eventResolve
	throw "Not yet implemented";
}
