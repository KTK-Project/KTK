#ifndef GameManager_h__
#define GameManager_h__

#include "RoundManager.h"
#include "PlayersManager.h"
#include "EventManagers.h"
#include "Card\CardPile.h"
#include "TextManager.h"

class GameManager {
public:
	GameManager(const GameManager &) = delete;
	GameManager & operator=(const GameManager &) = delete;
	static GameManager * getInstance();

	PlayersManager & getPlayerManager();
	RoundManager & getRoundManager();
	EventManagers & getEventManager();
	CardPile & getDarkcardPile();
	CardPile & getDiscardPile();
	TextManager & getTextManger();

	void gameBegin();
	void gameEnd() const;

private:
	GameManager();

	PlayersManager m_playerManager;
	RoundManager m_roundManager;
	EventManagers m_eventManager;
	CardPile m_darkcardPile;
	CardPile m_discardPile;
	TextManager m_textManger;
};
#endif // GameManager_h__
