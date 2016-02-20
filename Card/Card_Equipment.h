#ifndef Card_Equipment_h__
#define Card_Equipment_h__

#include "Card.h"

class Card_Equipment : public Card {
public:
	Card_Equipment(ECardName name, ECardSuit suit, int number, EEquipmentCard_Type equipType);

	EEquipmentCard_Type getEquipmentType() const;
	int getState() const;
	void setState(int state);
	bool getCanUse() const;
	void setCanUse(bool canUse);

private:
	EEquipmentCard_Type m_equipType;
	int m_state;
	bool m_canUse;
};
#endif // Card_Equipment_h__
