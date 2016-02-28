#ifndef UI_InformationBox_h__
#define UI_InformationBox_h__

#include <vector>
#include "cocos2d.h"
#include "ui\CocosGUI.h"

class UI_InformationBox : public cocos2d::Node {
public:
	static UI_InformationBox * create() {
		UI_InformationBox * pRet = new(std::nothrow) UI_InformationBox();
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
	void addInformation(const std::string & information);
	void removeAll();
private:
	std::vector<cocos2d::Label*> m_information;
	cocos2d::ui::Layout* m_layout;
	cocos2d::Sprite* m_background;
};
#endif // UI_InformationBox_h__
