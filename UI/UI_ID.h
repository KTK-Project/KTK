#ifndef UI_ID_h__
#define UI_ID_h__

#include "cocos2d.h"
#include "Manager\KTK_Enum.h"

class UI_ID : public cocos2d::Node {
public:
	static UI_ID* create() {
		UI_ID * pRet = new(std::nothrow) UI_ID();
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

	void setMarkID(const ECharID ID) const;

private:
	cocos2d::Sprite* m_markID;
	cocos2d::Node* m_IDList;
};
#endif // UI_ID_h__
