#ifndef Card_Equipment_h__
#define Card_Equipment_h__

#include "Card.h"

class Card_Equipment : public Card {

private:
	EquipmentCard_Type m_equipType;
	bool m_canUse;
	int m_state;

public:
	EquipmentCard_Type getEquipmentType() const;

	int getState() const;

	void setState(const int state) const;

	Card_Equipment() const;
};
#endif // Card_Equipment_h__
