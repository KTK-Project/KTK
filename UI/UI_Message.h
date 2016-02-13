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
	void setString(const std::string& string) const;

	void setVisible(const bool visible) const;

	void update(const float delta) const;

	void setButton1ValidCheck(const std::function<bool ()> m_button1ValidCheck) const;

	void setButton2ValidCheck(const std::function<bool ()> m_button2ValidCheck) const;

	void setButton1CallBack(const std::function<void (const std::shared_ptr<Event_Base>&)> m_button1CallBack) const;

	void setButton2CallBack(const std::function<void (const std::shared_ptr<Event_Base>&)> m_button2CallBack) const;
};
#endif // UI_Message_h__
