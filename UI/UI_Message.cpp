#include "UI_Message.h"

void UI_Message::setString(std::string& string) {
	// TODO - implement UI_Message::setString
	throw "Not yet implemented";
}

void UI_Message::setVisible(bool visible) {
	//true调用scheduleUpdate
//false调用unscheduleUpdate
	// TODO - implement UI_Message::setVisible
	throw "Not yet implemented";
}

void UI_Message::update(float delta) {
	//调用validcheck来确定按钮是否生效
	// TODO - implement UI_Message::update
	throw "Not yet implemented";
}

void UI_Message::setButton1ValidCheck(std::function<bool ()> m_button1ValidCheck) {
	this->m_button1ValidCheck = m_button1ValidCheck;
}

void UI_Message::setButton2ValidCheck(std::function<bool ()> m_button2ValidCheck) {
	this->m_button2ValidCheck = m_button2ValidCheck;
}

void UI_Message::setButton1CallBack(std::function<void (std::shared_ptr<Event_Base>&)> m_button1CallBack) {
	// TODO - implement UI_Message::setButton1CallBack
	throw "Not yet implemented";
}

void UI_Message::setButton2CallBack(std::function<void (std::shared_ptr<Event_Base>&)> m_button2CallBack) {
	// TODO - implement UI_Message::setButton2CallBack
	throw "Not yet implemented";
}
