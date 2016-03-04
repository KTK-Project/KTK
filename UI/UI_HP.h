#ifndef UI_HP_h__
#define UI_HP_h__

#include "cocos2d.h"
#include "Player/Player.h"
#include <vector>

class UI_HP : public cocos2d::Node {
public:
	static UI_HP * create(const std::shared_ptr<Player> & player) {
		UI_HP * pRet = new(std::nothrow) UI_HP();
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
	void refresh() const;
protected:
	UI_HP() = default;
private:
	std::shared_ptr<Player> m_player;
	std::vector<cocos2d::LayerColor *> m_bloods;
	std::vector<cocos2d::LayerColor *> m_emptyBloods;
};
#endif // UI_HP_h__
