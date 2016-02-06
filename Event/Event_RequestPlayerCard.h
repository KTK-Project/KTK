#ifndef Event_RequestPlayerCard_h__
#define Event_RequestPlayerCard_h__


class Event_RequestPlayerCard : Event_Interaction {

private:
	Player* m_player;
	bool m_handCard;
	bool m_lightning;
	bool m_drownInHappiness;
	bool m_famish;
	bool m_weapon;
	bool m_armor;
	bool m_offensiveHorse;
	bool m_defensiveHorse;
	Card* m_receiver;

public:
	Player* getM_player();

	void setM_player(Player* m_player);

	bool getM_handCard();

	void setM_handCard(bool m_handCard);

	bool getM_lightning();

	void setM_lightning(bool m_lightning);

	bool getM_drownInHappiness();

	void setM_drownInHappiness(bool m_drownInHappiness);

	bool getM_famish();

	void setM_famish(bool m_famish);

	bool getM_weapon();

	void setM_weapon(bool m_weapon);

	bool getM_armor();

	void setM_armor(bool m_armor);

	bool getM_offensiveHorse();

	void setM_offensiveHorse(bool m_offensiveHorse);

	bool getM_defensiveHorse();

	void setM_defensiveHorse(bool m_defensiveHorse);

	Card* getM_receiver();

	void setM_receiver(Card* m_receiver);

	void eventResolve();
};
#endif // Event_RequestPlayerCard_h__
