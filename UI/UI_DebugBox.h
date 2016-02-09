#ifndef UI_DebugBox_h__
#define UI_DebugBox_h__

#include "cocos2d.h"
#include "ui\CocosGUI.h"

class UI_DebugBox {
public:
	bool init();
private:
	cocos2d::ui::ListView* m_listView;
	cocos2d::Label* m_scrollLabel;
	cocos2d::ui::TextField* m_lineEdit;
};
#endif // UI_DebugBox_h__
