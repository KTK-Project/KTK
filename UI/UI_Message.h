#ifndef UI_Message_h__
#define UI_Message_h__

#include "cocos2d.h"
#include "ui\CocosGUI.h"
#include "Event\Event_Base.h"

class UI_Message {

private:
	cocos2d::Label* m_message;
	cocos2d::ui::Button* m_button1;
	cocos2d::ui::Button* m_button2;
	std::function<bool ()> m_button1ValidCheck;
	std::function<bool ()> m_button2ValidCheck;

public:
	void setString(std::string& string);

	void setVisible(bool visible);

	void update(float delta);

	void setButton1ValidCheck(std::function<bool ()> m_button1ValidCheck);

	void setButton2ValidCheck(std::function<bool ()> m_button2ValidCheck);

	void setButton1CallBack(std::function<void (std::shared_ptr<Event_Base>&)> m_button1CallBack);

	void setButton2CallBack(std::function<void (std::shared_ptr<Event_Base>&)> m_button2CallBack);
};
#endif // UI_Message_h__
