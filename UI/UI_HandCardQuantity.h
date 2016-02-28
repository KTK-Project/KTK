#ifndef UI_HandCardQuantity_h__
#define UI_HandCardQuantity_h__

#include "cocos2d.h"

class UI_HandCardQuantity : public cocos2d::Node {
public:
	static UI_HandCardQuantity * create() {
		UI_HandCardQuantity * pRet = new(std::nothrow) UI_HandCardQuantity();
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
	cocos2d::Sprite * m_quantityBackground;
	cocos2d::Label * m_quantity;
};
#endif // UI_HandCardQuantity_h__
