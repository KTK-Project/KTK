#ifndef UI_ID_h__
#define UI_ID_h__

#include "cocos2d.h"
#include "Manager\KTK_Enum.h"

class UI_ID {

private:
	cocos2d::Sprite* m_markID;
	cocos2d::Node* m_IDList;

public:
	void init();

	void setMarkID(Char_ID ID);
};
#endif // UI_ID_h__
