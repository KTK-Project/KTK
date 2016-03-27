#ifndef GameSence_h__
#define GameSence_h__

#include <vector>
#include "cocos2d.h"
#include "UI\UI_Desktop.h"
#include "UI\UI_LogBox.h"
#include "UI\UI_PlayerPanal.h"
#include "Player/Player.h"

class GameSence : public cocos2d::Layer {
public:
	static GameSence * create() {
		GameSence * pRet = new(std::nothrow) GameSence();
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
	virtual bool init() override;

    static cocos2d::Scene * scene();
	UI_Desktop * getDesktop() const;
	UI_LogBox * getLogBox() const;
	UI_PlayerPanal * getPlayerPanal(const std::shared_ptr<Player> & player) const;
private:
	bool initPlayerPanal();
	bool initLogBox();
	UI_Desktop * m_desktop;
	UI_LogBox * m_logBox;
	std::vector<UI_PlayerPanal *> m_playerPanals;
	cocos2d::Sprite * m_sitToLeft;
	cocos2d::Sprite * m_sitToRight;
};
#endif // GameSence_h__
