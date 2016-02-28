#ifndef UI_Message_h__
#define UI_Message_h__

#include "cocos2d.h"
#include "ui\CocosGUI.h"
#include "Event\Event_Base.h"

class UI_Message : public cocos2d::Node {
public:
	static UI_Message* create() {
		UI_Message * pRet = new(std::nothrow) UI_Message();
		if (pRet && pRet->init()) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool init();
	void setString(const std::string & string);
	void setVisible(bool visible);
	void setButton1ValidCheck(const std::function<bool()> & button1ValidCheck);
	void setButton2ValidCheck(const std::function<bool ()> & button2ValidCheck);
	void setButton1CallBack(const std::function<void (const std::shared_ptr<Event_Base> &)> & button1CallBack);
	void setButton2CallBack(const std::function<void (const std::shared_ptr<Event_Base> &)> & button2CallBack);
	void update(float delta) override;
private:
	cocos2d::Label* m_message;
	cocos2d::ui::Button* m_button1;
	cocos2d::ui::Button* m_button2;
	std::function<bool ()> m_button1ValidCheck;
	std::function<bool ()> m_button2ValidCheck;
};
#endif // UI_Message_h__
