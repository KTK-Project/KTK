#include "Event_MurderWithBorrowedWeapon.h"

std::shared_ptr<Player> Event_MurderWithBorrowedWeapon::getGoalPlayer1() const {
	return m_goalPlayer1.lock();
}

void Event_MurderWithBorrowedWeapon::setGoalPlayer1(const std::shared_ptr<Player> & goalPlayer1) {
	m_goalPlayer1 = goalPlayer1;
}

std::shared_ptr<Player> Event_MurderWithBorrowedWeapon::getGoalPlayer2() const {
	return m_goalPlayer2.lock();
}

void Event_MurderWithBorrowedWeapon::setGoalPlayer2(const std::shared_ptr<Player> & goalPlayer2) {
	m_goalPlayer2 = goalPlayer2;
}

void Event_MurderWithBorrowedWeapon::eventResolve() const {
	//对玩家一封装请求杀事件：
//成功：检查是否为方天画戟，并且满足只有最后一张手牌的条件：
//	满足：请求两个目标，封装杀事件
//	不满足：封装杀事件
//失败：武器给出牌者
	// TODO - implement Event_MurderWithBorrowedWeapon::eventResolve
	throw "Not yet implemented";
}
