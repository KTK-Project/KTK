#include "Event_Interaction.h"

const std::shared_ptr<Player> & Event_Interaction::getInteractPlayer() const {
	return m_interactPlayer;
}

void Event_Interaction::setInteractPlayer(const std::shared_ptr<Player> & interactPlayer) {
	m_interactPlayer = interactPlayer;
}

const std::string & Event_Interaction::getDescrption() const {
	return m_descrption;
}

void Event_Interaction::setDescrption(const std::string & descrption) {
	m_descrption = descrption;
}

bool Event_Interaction::getReceived() const {
	return m_received;
}

void Event_Interaction::setReceived(bool received) {
	m_received = received;
}

bool Event_Interaction::getReturned() const {
	return m_returned;
}

void Event_Interaction::setReturned(bool returned) {
	m_returned = returned;
}

const std::function<void (const Event_Base &)> & Event_Interaction::getReturnCallBack() const {
	return m_returnCallBack;
}

void Event_Interaction::setReturnCallBack(const std::function<void (const Event_Base &)> & returnCallBack) {
	m_returnCallBack = returnCallBack;
}

void Event_Interaction::eventResolve() const {
	// TODO - implement Event_Interaction::eventResolve
	throw "Not yet implemented";
}
