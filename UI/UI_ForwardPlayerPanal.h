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
	void initWithPlayer(const std::shared_ptr<Player> player) const;

	UI_SkillPanal* getSkillPanal() const;

	UI_HandCardPanal* getHandCardPanal() const;

	UI_Message* getMessage() const;

	void drawCards(const std::vector<std::shared_ptr<Card>>& cards) const;

	void setPlayerPanalState(const PlayerPanalState m_playerPanalState) const;

	void clean() const;
};
#endif // UI_ForwardPlayerPanal_h__
