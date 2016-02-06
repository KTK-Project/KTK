#include "Event_Interaction.h"

Player* Event_Interaction::getM_interactPlayer() {
	return this->m_interactPlayer;
}

void Event_Interaction::setM_interactPlayer(Player* m_interactPlayer) {
	this->m_interactPlayer = m_interactPlayer;
}

std::string Event_Interaction::getM_descrption() {
	return this->m_descrption;
}

void Event_Interaction::setM_descrption(std::string m_descrption) {
	this->m_descrption = m_descrption;
}

bool Event_Interaction::getM_received() {
	return this->m_received;
}

void Event_Interaction::setM_received(bool m_received) {
	this->m_received = m_received;
}

bool Event_Interaction::getM_returned() {
	return this->m_returned;
}

void Event_Interaction::setM_returned(bool m_returned) {
	this->m_returned = m_returned;
}

std::function<void (Event_Base&)> Event_Interaction::getM_returnCallBack() {
	return this->m_returnCallBack;
}

void Event_Interaction::setM_returnCallBack(std::function<void (Event_Base&)> m_returnCallBack) {
	this->m_returnCallBack = m_returnCallBack;
}

void Event_Interaction::eventResolve() {
	// TODO - implement Event_Interaction::eventResolve
	throw "Not yet implemented";
}
