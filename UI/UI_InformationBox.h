#ifndef UI_InformationBox_h__
#define UI_InformationBox_h__

#include <vector>
#include "cocos2d.h"
#include "ui\CocosGUI.h"

class UI_InformationBox {

private:
	std::vector<cocos2d::Label*> m_labels;
	cocos2d::ui::Layout* m_layout;
	cocos2d::Sprite* m_background;

public:
	void init();

	void addLabel(std::string& information);

	void removeAll();
};
#endif // UI_InformationBox_h__
