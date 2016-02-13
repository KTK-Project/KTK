#include "Card_Weapon.h"
#include <vector>

int Card_Weapon::getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const {
	//return 0
	// TODO - implement Card_Weapon::getGoalPlayerQuantity
	throw "Not yet implemented";
}

int Card_Weapon::getAttackRange() const {
	// TODO - implement Card_Weapon::getAttackRange
	throw "Not yet implemented";
}

void Card_Weapon::useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const {
	//调用基类useCard
//如果对应装备区有装备，则卸下装备，然后装备当前卡片，如果没有，就直接装备。
	// TODO - implement Card_Weapon::useCard
	throw "Not yet implemented";
}
