#ifndef UI_JudgeIcon_h__
#define UI_JudgeIcon_h__

#include <vector>
#include "cocos2d.h"

class UI_JudgeIcon {

private:
	std::vector<cocos2d::Sprite*> m_icon;

public:
	void init();

	void refresh();
};
#endif // UI_JudgeIcon_h__
