#ifndef Event_RequestCard_h__
#define Event_RequestCard_h__


class Event_RequestCard : Event_Interaction {

private:
	bool m_handCard;
	Card_Name m_requestHandCardName;
	int m_requestHandCardQuantity;
	bool m_weapon;
	bool m_armor;
	bool m_offensiveHorse;
	bool m_defensiveHorse;
	SelectedCards m_receiver;

public:
	bool getM_handCard();

	void setM_handCard(bool m_handCard);

	Card_Name getM_requestHandCardName();

	void setM_requestHandCardName(Card_Name m_requestHandCardName);

	int getM_requestHandCardQuantity();

	void setM_requestHandCardQuantity(int m_requestHandCardQuantity);

	bool getM_weapon();

	void setM_weapon(bool m_weapon);

	bool getM_armor();

	void setM_armor(bool m_armor);

	bool getM_offensiveHorse();

	void setM_offensiveHorse(bool m_offensiveHorse);

	bool getM_defensiveHorse();

	void setM_defensiveHorse(bool m_defensiveHorse);

	SelectedCards getM_receiver();

	void setM_receiver(SelectedCards m_receiver);

	void eventResolve();
};
#endif // Event_RequestCard_h__
