#ifndef UI_HandCardQuantity_h__
#define UI_HandCardQuantity_h__

#include "cocos2d.h"
#include "Player/Player.h"

class UI_HandCardQuantity : public cocos2d::Node {
public:
	static UI_HandCardQuantity * create(const std::shared_ptr<Player> & player) {
		UI_HandCardQuantity * pRet = new(std::nothrow) UI_HandCardQuantity();
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
	UI_HandCardQuantity() = default;
private:
	std::weak_ptr<Player> m_player;
	cocos2d::LayerColor * m_quantityBackground;
	cocos2d::Label * m_quantity;
};
#endif // UI_HandCardQuantity_h__
