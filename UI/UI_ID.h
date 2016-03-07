#ifndef UI_ID_h__
#define UI_ID_h__

#include "cocos2d.h"
#include "Manager\KTK_Enum.h"
#include "Player\Player.h"

class UI_ID : public cocos2d::Node {
public:
	static UI_ID * create(const std::shared_ptr<Player> & player) {
		UI_ID * pRet = new(std::nothrow) UI_ID();
		if (pRet && pRet->initWithPlayer(player)) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool initWithPlayer(const std::shared_ptr<Player> & player);
	void setMarkID(ECharID ID);
protected:
	UI_ID() = default;
private:
	std::shared_ptr<Player> m_player;
	cocos2d::LayerColor * m_markID;
	cocos2d::Node * m_IDList;
};
#endif // UI_ID_h__
