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
	EPlayerColor m_playerColor;
	EPlayerPanalState m_playerPanalState;

public:
	void initWithPlayer(const std::shared_ptr<Player> player) const;

	std::shared_ptr<Player> getPlayer() const;

	void setPlayer(const std::shared_ptr<Player> player) const;

	UI_ID* getID() const;

	UI_HP* getHP() const;

	UI_Position* getPosition() const;

	UI_HandCardQuantity* getHandCardQuantity() const;

	UI_EquipmentPanal* getEquipmentPanal() const;

	UI_JudgeIcon* getJudgeIcon() const;

	UI_InformationBox* getInformationBox() const;

	UI_LogBox* getLogBox() const;

	void drawCards(const std::vector<std::shared_ptr<Card>>& cards) const;

	EPlayerColor getPlayerColor() const;

	void setPlayerColor(const EPlayerColor m_playerColor) const;

	EPlayerPanalState getPlayerPanalState() const;

	void setPlayerPanalState(const EPlayerPanalState m_playerPanalState) const;

	void clean() const;
};
#endif // UI_PlayerPanal_h__
