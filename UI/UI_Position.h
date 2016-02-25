#ifndef UI_Position_h__
#define UI_Position_h__

#include "cocos2d.h"

class UI_Position : public cocos2d::Node {
public:
	static UI_Position* create() {
		UI_Position * pRet = new(std::nothrow) UI_Position();
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
	void refresh() const;
private:
	cocos2d::Sprite* m_positionBackground;
	cocos2d::Label* m_label;
};
#endif // UI_Position_h__
