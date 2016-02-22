#ifndef Card_Equipment_h__
#define Card_Equipment_h__

#include "Card.h"

class Card_Equipment : public Card {
public:
	Card_Equipment(ECardName name, ECardSuit suit, int number, EEquipmentCard_Type equipType);
	EEquipmentCard_Type getEquipmentType() const;
	virtual ~Card_Equipment() = 0 { }
private:
	EEquipmentCard_Type m_equipType;
};
#endif // Card_Equipment_h__
