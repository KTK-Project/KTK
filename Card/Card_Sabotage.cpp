#include "Card_Sabotage.h"

int Card_Sabotage::getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const {
	//return 1
	// TODO - implement Card_Sabotage::getGoalPlayerQuantity
	throw "Not yet implemented";
}

std::vector<std::shared_ptr<Player>> Card_Sabotage::getCandidates(const std::shared_ptr<Player> playCardPlayer) const {
	//调用Card::getCandidate()
//从中选择有卡牌的玩家。
	// TODO - implement Card_Sabotage::getCandidate
	throw "Not yet implemented";
}

void Card_Sabotage::useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const {
	//调用Card::useCard()
//封装对应卡牌事件
	// TODO - implement Card_Sabotage::useCard
	throw "Not yet implemented";
}
