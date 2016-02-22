#include "Card_MurderWithBorrowedWeapon.h"

int Card_MurderWithBorrowedWeapon::getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const {
	//return 2
	// TODO - implement Card_MurderWithBorrowedWeapon::getGoalPlayerQuantity
	throw "Not yet implemented";
}

std::vector<std::shared_ptr<Player>> Card_MurderWithBorrowedWeapon::getCandidates(const std::shared_ptr<Player> & playCardPlayer) const {
	//调用Card::getCandidate()
//第一玩家必须有武器
//第二玩家在第一玩家的攻击范围内
	// TODO - implement Card_MurderWithBorrowedWeapon::getCandidate
	throw "Not yet implemented";
}

void Card_MurderWithBorrowedWeapon::onUpping() const {
	//发出请求目标事件。
//请求成功后，根据此目标，继续发出请求目标事件。
//请求成功后，确定按钮生效。
//确定按钮按下后，发出murder事件。
	// TODO - implement Card_MurderWithBorrowedWeapon::onUpping
	throw "Not yet implemented";
}

void Card_MurderWithBorrowedWeapon::useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const {
	//调用Card::useCard()
//封装对应卡牌事件
	// TODO - implement Card_MurderWithBorrowedWeapon::useCard
	throw "Not yet implemented";
}
