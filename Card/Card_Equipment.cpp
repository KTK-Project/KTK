#include "Card_Equipment.h"

Card_Equipment::Card_Equipment(ECardName name, ECardSuit suit, int number, EEquipmentCard_Type equipType) : Card(name, suit, number) {
	Card::setType(ECardType::EQUIPMENT);
	m_equipType = equipType;
}

EEquipmentCard_Type Card_Equipment::getEquipmentType() const {
	return m_equipType;
}

int Card_Equipment::getState() const {
	return m_state;
}

void Card_Equipment::setState(int state) {
	m_state = state;
}

bool Card_Equipment::getCanUse() const {
	return m_canUse;
}

void Card_Equipment::setCanUse(bool canUse) {
	m_canUse = canUse;
}
