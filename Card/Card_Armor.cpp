#include "Card_Armor.h"

int Card_Armor::getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const {
	// TODO - implement Card_Armor::getGoalPlayerQuantity
	throw "Not yet implemented";
	//return 0
}

bool Card_Armor::getValid() const {
	return this->m_valid;
}

void Card_Armor::setValid(const bool m_valid) const {
	this->m_valid = m_valid;
}
