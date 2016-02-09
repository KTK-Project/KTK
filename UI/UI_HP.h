#ifndef UI_HP_h__
#define UI_HP_h__

#include "cocos2d.h"
#include <vector>

class UI_HP {

private:
	std::vector<cocos2d::Sprite*> m_bloods;
	std::vector<cocos2d::Sprite*> m_emptyBloods;

public:
	void init();

	void refresh();
};
#endif // UI_HP_h__
