#ifndef UI_LogBox_h__
#define UI_LogBox_h__

#include "cocos2d.h"
#include "UI\CocosGUI.h"
#include <string>

class UI_LogBox : public cocos2d::Node {
public:
	static UI_LogBox * create() {
		UI_LogBox * pRet = new(std::nothrow) UI_LogBox();
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
	void addLog(const std::string & log);
protected:
	UI_LogBox() = default;
private:
	int m_counter;
	cocos2d::ui::ListView * m_listView;
};
#endif // UI_LogBox_h__
