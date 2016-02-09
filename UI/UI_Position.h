#ifndef UI_Position_h__
#define UI_Position_h__

#include "cocos2d.h"

class UI_Position {

private:
	cocos2d::Sprite* m_positionBackground;
	cocos2d::Label* m_label;

public:
	void init();

	void refresh();
};
#endif // UI_Position_h__
