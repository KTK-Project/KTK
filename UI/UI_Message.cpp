#include "UI_Message.h"

void UI_Message::setString(const std::string& string) const {
	// TODO - implement UI_Message::setString
	throw "Not yet implemented";
}

void UI_Message::setVisible(const bool visible) const {
	//true调用scheduleUpdate
//false调用unscheduleUpdate
	// TODO - implement UI_Message::setVisible
	throw "Not yet implemented";
}

void UI_Message::update(const float delta) const {
	//调用validcheck来确定按钮是否生效
	// TODO - implement UI_Message::update
	throw "Not yet implemented";
}

void UI_Message::setButton1ValidCheck(const std::function<bool ()> m_button1ValidCheck) const {
	throw "Not yet implemented";
}

void UI_Message::setButton2ValidCheck(const std::function<bool ()> m_button2ValidCheck) const {
	throw "Not yet implemented";
}

void UI_Message::setButton1CallBack(const std::function<void (const std::shared_ptr<Event_Base>&)> m_button1CallBack) const {
	// TODO - implement UI_Message::setButton1CallBack
	throw "Not yet implemented";
}

void UI_Message::setButton2CallBack(const std::function<void (const std::shared_ptr<Event_Base>&)> m_button2CallBack) const {
	// TODO - implement UI_Message::setButton2CallBack
	throw "Not yet implemented";
}
