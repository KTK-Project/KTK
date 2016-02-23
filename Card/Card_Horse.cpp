#include "Card_Horse.h"


Card_Horse::Card_Horse(ECardName name, ECardSuit suit, int number) 
	 :Card_Equipment(name, suit, number, EEquipmentCard_Type::HORSE) {
	switch (name)
	{
		case ECardName::JUEYING:
			m_horseType = EHorseType::DEFENSIVE;
			break;
		case ECardName::ZHUAHUANGFEIDIAN:
			m_horseType = EHorseType::DEFENSIVE;
			break;
		case ECardName::DILU:
			m_horseType = EHorseType::DEFENSIVE;
			break;
		case ECardName::ZIXING:
			m_horseType = EHorseType::OFFENSIVE;
			break;
		case ECardName::CHITU:
			m_horseType = EHorseType::OFFENSIVE;
			break;
		case ECardName::DAWAN:
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

EHorseType Card_Horse::getHorseType() const {
	return m_horseType;
}
