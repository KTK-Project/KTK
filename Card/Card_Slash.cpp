#include "Card_Slash.h"

int Card_Slash::getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const {
	//查看出牌者是否装备了方天画戟，若是，返回3
//否则返回1
	// TODO - implement Card_Slash::getGoalPlayerQuantity
	throw "Not yet implemented";
}

std::vector<std::shared_ptr<Player>> Card_Slash::getCandidate(const std::shared_ptr<Player> playCardPlayer) const {
	//调用Card::getCandidate()
//排除空城发动中的诸葛亮。
	// TODO - implement Card_Slash::getCandidate
	throw "Not yet implemented";
}

void Card_Slash::useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const {
	//调用Card::useCard()
//封装Event_Slash事件，发送给eventmanager
//设置usedOnce为ture
	// TODO - implement Card_Slash::useCard
	throw "Not yet implemented";
}

void Card_Slash::eventCallBack(const std::shared_ptr<Event_Base>& event) const {
	// TODO - implement Card_Slash::eventCallBack
	throw "Not yet implemented";
}
