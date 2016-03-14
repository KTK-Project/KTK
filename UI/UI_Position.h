#ifndef UI_Position_h__
#define UI_Position_h__

#include "cocos2d.h"
#include "Player/Player.h"

class UI_Position : public cocos2d::Node {
public:
	static UI_Position * create(const std::shared_ptr<Player> & player) {
		UI_Position * pRet = new(std::nothrow) UI_Position();
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
	void refresh();
protected:
	UI_Position() = default;
private:
	std::weak_ptr<Player> m_player;
	cocos2d::LayerColor * m_positionBackground;
	cocos2d::Label * m_label;
};
#endif // UI_Position_h__
