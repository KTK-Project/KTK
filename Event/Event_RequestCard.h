#ifndef Event_RequestCard_h__
#define Event_RequestCard_h__

#include "Event_Interaction.h"
#include "Manager\KTK_Enum.h"
#include "SelectedCards.h"

class Event_RequestCard : public Event_Interaction {

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
	bool getHandCard();

	void setHandCard(bool m_handCard);

	Card_Name getRequestHandCardName();

	void setRequestHandCardName(Card_Name m_requestHandCardName);

	int getRequestHandCardQuantity();

	void setRequestHandCardQuantity(int m_requestHandCardQuantity);

	bool getWeapon();

	void setWeapon(bool m_weapon);

	bool getArmor();

	void setArmor(bool m_armor);

	bool getOffensiveHorse();

	void setOffensiveHorse(bool m_offensiveHorse);

	bool getDefensiveHorse();

	void setDefensiveHorse(bool m_defensiveHorse);

	SelectedCards getReceiver();

	void setReceiver(SelectedCards m_receiver);

	void eventResolve();
};
#endif // Event_RequestCard_h__
