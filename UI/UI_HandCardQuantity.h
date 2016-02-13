#ifndef UI_HandCardQuantity_h__
#define UI_HandCardQuantity_h__

#include "cocos2d.h"

class UI_HandCardQuantity {

private:
	cocos2d::Sprite* m_quantityBackground;
	cocos2d::Label* m_quantity;

public:
	void init() const;

	void refresh() const;
};
#endif // UI_HandCardQuantity_h__
