#ifndef UI_ForwardPlayerPanal_h__
#define UI_ForwardPlayerPanal_h__


class UI_ForwardPlayerPanal : UI_PlayerPanal {

private:
	UI_SkillPanal* m_skillPanal;
	UI_HandCardPanal* m_handCardPanal;
	UI_Message* m_message;
	int m_playerPanalFilter;
	int m_cardFilter;
	SelectedCards m_selectedCards;
	SelectedPlayers m_selectedPlayers;

public:
	void initWithPlayer(Player* player);

	UI_SkillPanal* getSkillPanal();

	UI_HandCardPanal* getHandCardPanal();

	UI_Message* getMessage();

	void drawCards(vector<Card*>& cards);

	void setM_playerPanalState(PlayerPanalState m_playerPanalState);

	void clean();
};
#endif // UI_ForwardPlayerPanal_h__
