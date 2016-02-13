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
	UI_Desktop* getDesktop() const;

	UI_LogBox* getLogBox() const;

	UI_PlayerPanal* getPlayerPanal(const std::shared_ptr<Player> player) const;
};
#endif // UI_GameSence_h__
