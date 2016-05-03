#include "Card_Equipment.h"

Card_Equipment::Card_Equipment(ECardName name, ECardSuit suit, int number, EEquipmentCard_Type equipType) : Card(name, suit, number) {
	Card::setType(ECardType::EQUIPMENT);
	m_equipType = equipType;
}

EEquipmentCard_Type Card_Equipment::getEquipmentType() const {
	return m_equipType;
}
