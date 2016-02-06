#ifndef UI_GameSence_h__
#define UI_GameSence_h__


class UI_GameSence {

private:
	UI_Desktop* m_desktop;
	UI_LogBox* m_logBox;
	vector<UI_PlayerPanal*> m_playerPanals;
	Sprite* m_sitToLeft;
	Sprite* m_sitToRight;

public:
	UI_Desktop* getDesktop();

	UI_LogBox* getLogBox();

	UI_PlayerPanal* getPlayerPanal(Player* player);
};
#endif // UI_GameSence_h__
