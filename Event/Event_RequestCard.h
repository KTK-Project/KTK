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
	bool getHandCard() const;

	void setHandCard(const bool m_handCard) const;

	Card_Name getRequestHandCardName() const;

	void setRequestHandCardName(const Card_Name m_requestHandCardName) const;

	int getRequestHandCardQuantity() const;

	void setRequestHandCardQuantity(const int m_requestHandCardQuantity) const;

	bool getWeapon() const;

	void setWeapon(const bool m_weapon) const;

	bool getArmor() const;

	void setArmor(const bool m_armor) const;

	bool getOffensiveHorse() const;

	void setOffensiveHorse(const bool m_offensiveHorse) const;

	bool getDefensiveHorse() const;

	void setDefensiveHorse(const bool m_defensiveHorse) const;

	SelectedCards getReceiver() const;

	void setReceiver(const SelectedCards m_receiver) const;

	void eventResolve() const;
};
#endif // Event_RequestCard_h__
