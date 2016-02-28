#ifndef Event_RequestPlayerCard_h__
#define Event_RequestPlayerCard_h__

#include "Event_Interaction.h"
#include <memory>
#include "Player\Player.h"
#include "Card\Card.h"

class Event_RequestPlayerCard : public Event_Interaction {
public:
	const std::shared_ptr<Player> & getPlayer() const;
	void setPlayer(const std::shared_ptr<Player> & player);
	bool getHandCard() const;
	void setHandCard(bool handCard);
	bool getLightning() const;
	void setLightning(bool lightning);
	bool getDrownInHappiness() const;
	void setDrownInHappiness(bool drownInHappiness);
	bool getFamish() const;
	void setFamish(bool famish);
	bool getWeapon() const;
	void setWeapon(bool weapon);
	bool getArmor() const;
	void setArmor(bool armor);
	bool getOffensiveHorse() const;
	void setOffensiveHorse(bool offensiveHorse);
	bool getDefensiveHorse() const;
	void setDefensiveHorse(bool defensiveHorse);
	const std::shared_ptr<Card> & getReceiver() const;
	void setReceiver(const std::shared_ptr<Card> & receiver);
	void eventResolve() const;
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
};
#endif // Event_RequestPlayerCard_h__
