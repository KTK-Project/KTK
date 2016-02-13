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
	std::shared_ptr<Player> getPlayer() const;

	void setPlayer(const std::shared_ptr<Player> m_player) const;

	bool getHandCard() const;

	void setHandCard(const bool m_handCard) const;

	bool getLightning() const;

	void setLightning(const bool m_lightning) const;

	bool getDrownInHappiness() const;

	void setDrownInHappiness(const bool m_drownInHappiness) const;

	bool getFamish() const;

	void setFamish(const bool m_famish) const;

	bool getWeapon() const;

	void setWeapon(const bool m_weapon) const;

	bool getArmor() const;

	void setArmor(const bool m_armor) const;

	bool getOffensiveHorse() const;

	void setOffensiveHorse(const bool m_offensiveHorse) const;

	bool getDefensiveHorse() const;

	void setDefensiveHorse(const bool m_defensiveHorse) const;

	std::shared_ptr<Card> getReceiver() const;

	void setReceiver(const std::shared_ptr<Card> m_receiver) const;

	void eventResolve() const;
};
#endif // Event_RequestPlayerCard_h__
