#ifndef UI_GameSence_h__
#define UI_GameSence_h__

#include <vector>
#include "cocos2d.h"
#include "UI_Desktop.h"
#include "UI_LogBox.h"
#include "UI_PlayerPanal.h"
#include "Player/Player.h"

class UI_GameSence {

private:
	UI_Desktop* m_desktop;
	UI_LogBox* m_logBox;
	std::vector<UI_PlayerPanal*> m_playerPanals;
	cocos2d::Sprite* m_sitToLeft;
	cocos2d::Sprite* m_sitToRight;

public:
	UI_Desktop* getDesktop();

	UI_LogBox* getLogBox();

	UI_PlayerPanal* getPlayerPanal(std::shared_ptr<Player> player);
};
#endif // UI_GameSence_h__
