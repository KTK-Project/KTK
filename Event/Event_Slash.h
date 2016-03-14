#ifndef Event_Slash_h__
#define Event_Slash_h__

#include "Event_Base.h"
#include <memory>
#include <vector>
#include "Manager\KTK_Enum.h"
#include "Card\Card.h"
#include "Player\Player.h"

class Event_Slash : public  Event_Base {
public:
	std::shared_ptr<Player> getFirstPlayer() const;
	void setFirstPlayer(const std::shared_ptr<Player> & firstPlayer);
	const std::shared_ptr<Card> & getWeapon() const;
	void setWeapon(const std::shared_ptr<Card> & weapon);
	std::shared_ptr<Player> getGoalPlayers() const;
	void setGoalPlayers(const std::shared_ptr<Player> & goalPlayers);
	const std::shared_ptr<Card> & getArmor() const;
	void setArmor(const std::shared_ptr<Card> & armor);
	std::vector<std::shared_ptr<Card>> & getSlashs();
	bool getNeedToAskPlayer() const;
	void setNeedToAskPlayer(bool needToAskPlayer);
	ESlashState getSlashState() const;
	void setSlashState(ESlashState slashState);

	void eventResolve() const;
	void weaponCheckBeforeSlash() const;
	void armorCheckBeforeSlash() const;
	void slashing() const;
	void slashSuccess() const;
	void slashFail() const;
	void hurting() const;
	void slashFinish() const;

private:
	std::weak_ptr<Player> m_firstPlayer;
	std::shared_ptr<Card> m_weapon;
	std::weak_ptr<Player> m_goalPlayers;
	std::shared_ptr<Card> m_armor;
	std::vector<std::shared_ptr<Card>> m_slashs;
	ESlashState m_slashState;
	bool m_needToAskPlayer;
};
#endif // Event_Slash_h__
