#include "Card_Armor.h"

using std::shared_ptr;

int Card_Armor::getGoalPlayerQuantity(const shared_ptr<Player> & requester) const {
	return 0;
}

bool Card_Armor::getValid() const {
	return m_valid;
}

void Card_Armor::setValid(bool valid)  {
	m_valid = valid;
}
