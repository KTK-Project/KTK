#include "Card_Theft.h"

int Card_Theft::getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const {
	//return 0
	// TODO - implement Card_Theft::getGoalPlayerQuantity
	throw "Not yet implemented";
}

std::vector<std::shared_ptr<Player>> Card_Theft::getCandidates(const std::shared_ptr<Player> playCardPlayer) const {
	//调用Card::getCandidate()
//从中选择有卡牌的玩家，且不是陆逊。
	// TODO - implement Card_Theft::getCandidate
	throw "Not yet implemented";
}

void Card_Theft::useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const {
	//调用Card::useCard()
//封装对应卡牌事件
	// TODO - implement Card_Theft::useCard
	throw "Not yet implemented";
}
