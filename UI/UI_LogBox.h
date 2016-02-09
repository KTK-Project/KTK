#ifndef UI_LogBox_h__
#define UI_LogBox_h__

#include "cocos2d.h"
#include "UI\CocosGUI.h"
#include <string>

class UI_LogBox {

private:
	cocos2d::ui::ListView* m_listView;
	cocos2d::ui::CheckBox* m_scrollCheckBox;
	cocos2d::Label* m_scrollLabel;

public:
	bool init();

	void addLog(std::string& log);
};
#endif // UI_LogBox_h__
