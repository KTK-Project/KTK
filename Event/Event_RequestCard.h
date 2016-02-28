#ifndef Event_RequestCard_h__
#define Event_RequestCard_h__

#include "Event_Interaction.h"
#include "Manager\KTK_Enum.h"
#include "SelectedCards.h"

class Event_RequestCard : public Event_Interaction {
public:
	bool getHandCard() const;
	void setHandCard(bool handCard);
	ECardName getRequestHandCardName() const;
	void setRequestHandCardName(ECardName requestHandCardName);
	int getRequestHandCardQuantity() const;
	void setRequestHandCardQuantity(int requestHandCardQuantity);
	bool getWeapon() const;
	void setWeapon(bool weapon);
	bool getArmor() const;
	void setArmor(bool armor);
	bool getOffensiveHorse() const;
	void setOffensiveHorse(bool offensiveHorse);
	bool getDefensiveHorse() const;
	void setDefensiveHorse(bool defensiveHorse);
	SelectedCards & getReceiver();
	void eventResolve() const;
private:
	bool m_handCard;
	ECardName m_requestHandCardName;
	int m_requestHandCardQuantity;
	bool m_weapon;
	bool m_armor;
	bool m_offensiveHorse;
	bool m_defensiveHorse;
	SelectedCards m_receiver;
};
#endif // Event_RequestCard_h__
