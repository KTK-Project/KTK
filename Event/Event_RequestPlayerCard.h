#ifndef Event_RequestPlayerCard_h__
#define Event_RequestPlayerCard_h__

#include "Event_Interaction.h"
#include <memory>
#include "Player\Player.h"
#include "Card\Card.h"

class Event_RequestPlayerCard : Event_Interaction {

private:
	std::shared_ptr<Player> m_player;
	bool m_handCard;
	bool m_lightning;
	bool m_drownInHappiness;
	bool m_famish;
	bool m_weapon;
	bool m_armor;
	bool m_offensiveHorse;
	bool m_defensiveHorse;
	std::shared_ptr<Card> m_receiver;

public:
	std::shared_ptr<Player> getPlayer();

	void setPlayer(std::shared_ptr<Player> m_player);

	bool getHandCard();

	void setHandCard(bool m_handCard);

	bool getLightning();

	void setLightning(bool m_lightning);

	bool getDrownInHappiness();

	void setDrownInHappiness(bool m_drownInHappiness);

	bool getFamish();

	void setFamish(bool m_famish);

	bool getWeapon();

	void setWeapon(bool m_weapon);

	bool getArmor();

	void setArmor(bool m_armor);

	bool getOffensiveHorse();

	void setOffensiveHorse(bool m_offensiveHorse);

	bool getDefensiveHorse();

	void setDefensiveHorse(bool m_defensiveHorse);

	std::shared_ptr<Card> getReceiver();

	void setReceiver(std::shared_ptr<Card> m_receiver);

	void eventResolve();
};
#endif // Event_RequestPlayerCard_h__
