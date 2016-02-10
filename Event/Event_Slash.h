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
	std::shared_ptr<Player> getFirstPlayer();

	void setFirstPlayer(std::shared_ptr<Player> m_firstPlayer);

	std::shared_ptr<Card> getWeapon();

	void setWeapon(std::shared_ptr<Card> m_weapon);

	std::shared_ptr<Player> getGoalPlayers();

	void setGoalPlayers(std::shared_ptr<Player> m_goalPlayers);

	std::shared_ptr<Card> getArmor();

	void setArmor(std::shared_ptr<Card> m_armor);

	std::vector<std::shared_ptr<Card>> getSlash();

	void setSlash(std::vector<std::shared_ptr<Card>> m_slash);

	bool getNeedToAskPlayer();

	void setNeedToAskPlayer(bool m_needToAskPlayer);

	Slash_State getSlashState();

	void setSlashState(Slash_State m_slashState);

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
