#ifndef UI_JudgeIcon_h__
#define UI_JudgeIcon_h__

#include <vector>
#include "cocos2d.h"

class UI_JudgeIcon : public cocos2d::Node {
public:
	static UI_JudgeIcon* create() {
		UI_JudgeIcon * pRet = new(std::nothrow) UI_JudgeIcon();
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
	std::vector<cocos2d::Sprite*> m_icon;
};
#endif // UI_JudgeIcon_h__
