#include "Card_Slash.h"

int Card_Slash::getGoalPlayerQuantity(std::shared_ptr<Player> requester) {
	//查看出牌者是否装备了方天画戟，若是，返回3
//否则返回1
	// TODO - implement Card_Slash::getGoalPlayerQuantity
	throw "Not yet implemented";
}

std::vector<std::shared_ptr<Player>> Card_Slash::getCandidate(std::shared_ptr<Player> playCardPlayer) {
	//调用Card::getCandidate()
//排除空城发动中的诸葛亮。
	// TODO - implement Card_Slash::getCandidate
	throw "Not yet implemented";
}

void Card_Slash::useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer) {
	//调用Card::useCard()
//封装Event_Slash事件，发送给eventmanager
//设置usedOnce为ture
	// TODO - implement Card_Slash::useCard
	throw "Not yet implemented";
}

void Card_Slash::eventCallBack(std::shared_ptr<Event_Base>& event) {
	// TODO - implement Card_Slash::eventCallBack
	throw "Not yet implemented";
}
