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
public:
	static UI_PlayerPanal * create(const std::shared_ptr<Player> & player) {
		UI_ForwardPlayerPanal * pRet = new(std::nothrow) UI_ForwardPlayerPanal();
		if (pRet && pRet->initWithPlayer(player)) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool initWithPlayer(const std::shared_ptr<Player> & player);
	UI_SkillPanal * getSkillPanal() const;
	UI_HandCardPanal * getHandCardPanal() const;
	UI_Message * getMessage() const;
	void drawCards(const std::vector<std::shared_ptr<Card>> & cards) const;
	void setPlayerPanalState(EPlayerPanalState playerPanalState);
	void clean() const;
protected:
	UI_ForwardPlayerPanal() = default;
private:
	UI_SkillPanal * m_skillPanal;
	UI_HandCardPanal * m_handCardPanal;
	UI_Message * m_message;
//	Todo:stm	delete or not?
// 	int m_playerPanalFilter;
// 	int m_cardFilter;
	SelectedCards m_selectedCards;
	SelectedPlayers m_selectedPlayers;
};
#endif // UI_ForwardPlayerPanal_h__
