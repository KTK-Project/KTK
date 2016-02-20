#include "Card_Equipment.h"

Card_Equipment::Card_Equipment(ECardName name, ECardSuit suit, int number, EEquipmentCard_Type equipType) : Card(name, suit, number) {
	Card::setType(ECardType::EQUIPMENT);
	m_equipType = equipType;
}

//	Todo: stl
EEquipmentCard_Type Card_Equipment::getEquipmentType() const {
	// TODO - implement Card_Equipment::getEquipmentType
	throw "Not yet implemented";
}

//	Todo: stl
int Card_Equipment::getState() const {
	// TODO - implement Card_Equipment::getState
	throw "Not yet implemented";
}

//	Todo: stl
void Card_Equipment::setState(int state) {
	// TODO - implement Card_Equipment::setState
	throw "Not yet implemented";
}

bool Card_Equipment::getCanUse() const {
	return m_canUse;
}

void Card_Equipment::setCanUse(bool canUse) {
	m_canUse = canUse;
}
