#ifndef Event_Slash_h__
#define Event_Slash_h__

#include "Event_Base.h"
#include <memory>
#include <vector>
#include "Manager\KTK_Enum.h"
#include "Card\Card.h"
#include "Player\Player.h"

class Event_Slash : Event_Base {

private:
	std::shared_ptr<Player> m_firstPlayer;
	std::shared_ptr<Card> m_weapon;
	std::shared_ptr<Player> m_goalPlayers;
	std::shared_ptr<Card> m_armor;
	std::vector<std::shared_ptr<Card>> m_slash;
	Slash_State m_slashState;
	bool m_needToAskPlayer;

public:
	std::shared_ptr<Player> getM_firstPlayer();

	void setM_firstPlayer(std::shared_ptr<Player> m_firstPlayer);

	std::shared_ptr<Card> getM_weapon();

	void setM_weapon(std::shared_ptr<Card> m_weapon);

	std::shared_ptr<Player> getM_goalPlayers();

	void setM_goalPlayers(std::shared_ptr<Player> m_goalPlayers);

	std::shared_ptr<Card> getM_armor();

	void setM_armor(std::shared_ptr<Card> m_armor);

	std::vector<std::shared_ptr<Card>> getM_slash();

	void setM_slash(std::vector<std::shared_ptr<Card>> m_slash);

	bool getM_needToAskPlayer();

	void setM_needToAskPlayer(bool m_needToAskPlayer);

	Slash_State getM_slashState();

	void setM_slashState(Slash_State m_slashState);

	void eventResolve();

	void weaponCheckBeforeSlash();

	void armorCheckBeforeSlash();

	void slashing();

	void slashSuccess();

	void slashFail();

	void hurting();

	void slashFinish();
};
#endif // Event_Slash_h__
