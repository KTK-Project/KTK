#ifndef UI_HP_h__
#define UI_HP_h__

#include "cocos2d.h"
#include <vector>

class UI_HP : public cocos2d::Node {
public:
	static UI_HP * create() {
		UI_HP * pRet = new(std::nothrow) UI_HP();
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
	std::vector<cocos2d::Sprite*> m_bloods;
	std::vector<cocos2d::Sprite*> m_emptyBloods;
};
#endif // UI_HP_h__
