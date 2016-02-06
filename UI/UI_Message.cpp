#include "UI_Message.h"

void UI_Message::setString(std::string& string) {
	// TODO - implement UI_Message::setString
	throw "Not yet implemented";
}

void UI_Message::setVisible(bool visible) {
	// TODO - implement UI_Message::setVisible
	throw "Not yet implemented";
}

void UI_Message::update(float delta) {
	// TODO - implement UI_Message::update
	throw "Not yet implemented";
}

void UI_Message::setM_button1ValidCheck(std::function<bool ()> m_button1ValidCheck) {
	this->m_button1ValidCheck = m_button1ValidCheck;
}

void UI_Message::setM_button2ValidCheck(std::function<bool ()> m_button2ValidCheck) {
	this->m_button2ValidCheck = m_button2ValidCheck;
}

void UI_Message::setM_button1CallBack(std::function<void (std::shared_ptr<Event_Base>&)> m_button1CallBack) {
	// TODO - implement UI_Message::setM_button1CallBack
	throw "Not yet implemented";
}

void UI_Message::setM_button2CallBack(std::function<void (std::shared_ptr<Event_Base>&)> m_button2CallBack) {
	// TODO - implement UI_Message::setM_button2CallBack
	throw "Not yet implemented";
}
