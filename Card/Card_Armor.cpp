#include "Card_Armor.h"

int Card_Armor::getGoalPlayerQuantity(std::shared_ptr<Player> requester) {
	// TODO - implement Card_Armor::getGoalPlayerQuantity
	throw "Not yet implemented";
	//return 0
}

bool Card_Armor::getValid() {
	return this->m_valid;
}

void Card_Armor::setValid(bool m_valid) {
	this->m_valid = m_valid;
}
