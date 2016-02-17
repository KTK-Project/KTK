#include "Card_DrownInHappiness.h"

int Card_DrownInHappiness::getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const {
	// TODO - implement Card_DrownInHappiness::getGoalPlayerQuantity
	throw "Not yet implemented";
	//调用Card::getCandidate()
//从中选择排除陆逊。
}

std::vector<std::shared_ptr<Player>> Card_DrownInHappiness::getCandidates(const std::shared_ptr<Player> playCardPlayer) const {
	// TODO - implement Card_DrownInHappiness::getCandidate
	throw "Not yet implemented";
	//return 1
}

void Card_DrownInHappiness::useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const {
	// TODO - implement Card_DrownInHappiness::useCard
	throw "Not yet implemented";
	//调用Card::useCard()
//把当前卡牌压入目标玩家判定区
}
