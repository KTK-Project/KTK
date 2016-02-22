#include "Card_Horse.h"


//	Todo:stl
Card_Horse::Card_Horse(ECardName name, ECardSuit suit, int number) : Card_Equipment(name, suit, number, EEquipmentCard_Type::HORSE) {
	switch (name) {
		case ECardName::CHITU:
			m_horseType = EHorseType::OFFENSIVE;
			break;
		default:
			throw "Can't find match!";
			break;
	}
}

int Card_Horse::getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const {
	return 0;
}

//	Todo:stl
void Card_Horse::getHorseType() const {
	// TODO - implement Card_Horse::getHorseType
	throw "Not yet implemented";
}
