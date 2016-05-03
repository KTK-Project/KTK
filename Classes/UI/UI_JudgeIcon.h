#ifndef UI_JudgeIcon_h__
#define UI_JudgeIcon_h__

#include <vector>
#include "cocos2d.h"
#include "Player/Player.h"

class UI_JudgeIcon : public cocos2d::Node {
public:
	static UI_JudgeIcon * create(const std::shared_ptr<Player> & player) {
		UI_JudgeIcon * pRet = new(std::nothrow) UI_JudgeIcon();
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
	UI_JudgeIcon() = default;
private:
	std::weak_ptr<Player> m_player;
	std::vector<cocos2d::LayerColor *> m_icon;
};
#endif // UI_JudgeIcon_h__
