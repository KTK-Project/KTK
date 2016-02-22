#include "Card_Armor.h"

using std::shared_ptr;

int Card_Armor::getGoalPlayerQuantity(const shared_ptr<Player> & requester) const {
	return 0;
}

//	Todo:stl
bool Card_Armor::getValid() const {
	return this->m_valid;
}

//	Todo:stl
void Card_Armor::setValid(bool valid) const {
	throw "Not yet implemented";
}
