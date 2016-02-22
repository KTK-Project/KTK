#include "Event_Interaction.h"

//	Todo:stl
const std::shared_ptr<Player> & Event_Interaction::getInteractPlayer() const {
	return this->m_interactPlayer;
}

//	Todo:stl
void Event_Interaction::setInteractPlayer(const std::shared_ptr<Player> & interactPlayer) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::string & Event_Interaction::getDescrption() const {
	return this->m_descrption;
}

//	Todo:stl
void Event_Interaction::setDescrption(const std::string & descrption) {
	throw "Not yet implemented";
}

//	Todo:stl
bool Event_Interaction::getReceived() const {
	return this->m_received;
}

//	Todo:stl
void Event_Interaction::setReceived(bool received) {
	throw "Not yet implemented";
}

//	Todo:stl
bool Event_Interaction::getReturned() const {
	return this->m_returned;
}

//	Todo:stl
void Event_Interaction::setReturned(bool returned) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::function<void (const Event_Base &)> & Event_Interaction::getReturnCallBack() const {
	return this->m_returnCallBack;
}

//	Todo:stl
void Event_Interaction::setReturnCallBack(const std::function<void (const Event_Base &)> & returnCallBack) {
	throw "Not yet implemented";
}

void Event_Interaction::eventResolve() const {
	// TODO - implement Event_Interaction::eventResolve
	throw "Not yet implemented";
}
