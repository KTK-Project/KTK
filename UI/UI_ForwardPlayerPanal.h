#ifndef UI_ForwardPlayerPanal_h__
#define UI_ForwardPlayerPanal_h__

#include <memory>
#include <vector>
#include "UI_PlayerPanal.h"
#include "UI_SkillPanal.h"
#include "UI_HandCardPanal.h"
#include "UI_Message.h"
#include "Event\SelectedCards.h"
#include "Event\SelectedPlayers.h"
#include "Player\Player.h"
#include "Card\Card.h"
#include "Manager\KTK_Enum.h"

class UI_ForwardPlayerPanal : public UI_PlayerPanal {

private:
	UI_SkillPanal* m_skillPanal;
	UI_HandCardPanal* m_handCardPanal;
	UI_Message* m_message;
	int m_playerPanalFilter;
	int m_cardFilter;
	SelectedCards m_selectedCards;
	SelectedPlayers m_selectedPlayers;

public:
	void initWithPlayer(std::shared_ptr<Player> player);

	UI_SkillPanal* getSkillPanal();

	UI_HandCardPanal* getHandCardPanal();

	UI_Message* getMessage();

	void drawCards(std::vector<std::shared_ptr<Card>>& cards);

	void setM_playerPanalState(PlayerPanalState m_playerPanalState);

	void clean();
};
#endif // UI_ForwardPlayerPanal_h__
