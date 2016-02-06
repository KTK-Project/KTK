#ifndef UI_PlayerPanal_h__
#define UI_PlayerPanal_h__


class UI_PlayerPanal {

private:
	Sprite* m_background;
	Sprite* m_portrait;
	Sprite* m_force;
	Label* m_name;
	UI_ID* m_ID;
	UI_HP* m_HP;
	UI_Position* m_position;
	UI_HandCardQuantity* m_handCardQuantity;
	UI_EquipmentPanal* m_equipmentPanal;
	UI_JudgeIcon* m_judgeIcon;
	UI_InformationBox* m_informationBox;
	UI_LogBox* m_logBox;
	Player* m_player;
	Player_Color m_playerColor;
	PlayerPanalState m_playerPanalState;

public:
	void initWithPlayer(Player* player);

	Player* getPlayer();

	void setPlayer(Player* player);

	UI_ID* getID();

	UI_HP* getHP();

	UI_Position* getPosition();

	UI_HandCardQuantity* getHandCardQuantity();

	UI_EquipmentPanal* getEquipmentPanal();

	UI_JudgeIcon* getJudgeIcon();

	UI_InformationBox* getInformationBox();

	UI_LogBox* getLogBox();

	void drawCards(vector<Card*>& cards);

	Player_Color getM_playerColor();

	void setM_playerColor(Player_Color m_playerColor);

	PlayerPanalState getM_playerPanalState();

	void setM_playerPanalState(PlayerPanalState m_playerPanalState);

	void clean();
};
#endif // UI_PlayerPanal_h__
