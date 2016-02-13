#ifndef GameManager_h__
#define GameManager_h__

#include "RoundManager.h"
#include "PlayersManger.h"
#include "EventManagers.h"
#include "CharacterManager.h"
#include "Card\CardPile.h"

class GameManager {

private:
	GameManager* s_gameManager;
	PlayersManger m_playerManager;
	RoundManager m_roundManager;
	EventManagers m_eventManager;
	CharacterManager m_characterManager;
	CardPile m_darkcardPile;
	CardPile m_discardPile;

public:
	GameManager* getInstance() const;

	PlayersManger& getPlayerManager() const;

	RoundManager& getRoundManager() const;

	EventManagers& getEventManager() const;

	CharacterManager& getCharacterManager() const;

	CardPile& getDarkcardPile() const;

	CardPile& getDiscardPile() const;

	void gameBegin() const;

	void gameEnd() const;
};
#endif // GameManager_h__
