#ifndef UI_PlayerPanal_h__
#define UI_PlayerPanal_h__

#include "cocos2d.h"
#include "Player\Player.h"
#include "UI_ID.h"
#include "UI_HP.h"
#include "UI_Position.h"
#include "UI_HandCardQuantity.h"
#include "UI_EquipmentPanal.h"
#include "UI_JudgeIcon.h"
#include "UI_InformationBox.h"
#include "UI_LogBox.h"

class UI_PlayerPanal {

private:
	cocos2d::Sprite* m_background;
	cocos2d::Sprite* m_portrait;
	cocos2d::Sprite* m_force;
	cocos2d::Label* m_name;
	UI_ID* m_ID;
	UI_HP* m_HP;
	UI_Position* m_position;
	UI_HandCardQuantity* m_handCardQuantity;
	UI_EquipmentPanal* m_equipmentPanal;
	UI_JudgeIcon* m_judgeIcon;
	UI_InformationBox* m_informationBox;
	UI_LogBox* m_logBox;
	std::shared_ptr<Player> m_player;
	Player_Color m_playerColor;
	PlayerPanalState m_playerPanalState;

public:
	void initWithPlayer(std::shared_ptr<Player> player);

	std::shared_ptr<Player> getPlayer();

	void setPlayer(std::shared_ptr<Player> player);

	UI_ID* getID();

	UI_HP* getHP();

	UI_Position* getPosition();

	UI_HandCardQuantity* getHandCardQuantity();

	UI_EquipmentPanal* getEquipmentPanal();

	UI_JudgeIcon* getJudgeIcon();

	UI_InformationBox* getInformationBox();

	UI_LogBox* getLogBox();

	void drawCards(std::vector<std::shared_ptr<Card>>& cards);

	Player_Color getM_playerColor();

	void setM_playerColor(Player_Color m_playerColor);

	PlayerPanalState getM_playerPanalState();

	void setM_playerPanalState(PlayerPanalState m_playerPanalState);

	void clean();
};
#endif // UI_PlayerPanal_h__
