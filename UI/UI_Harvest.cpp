#include "UI_Harvest.h"

bool UI_Harvest::initWithCards(const std::vector<std::shared_ptr<Card>> cards) const {
	//每张卡牌的触摸事件， 触摸代表forwardplayer点了，调用chosedcard
//把players初始化为相同的大小
	// TODO - implement UI_Harvest::initWithCards
	throw "Not yet implemented";
}

void UI_Harvest::chosedCard(const std::shared_ptr<Player> player, const std::shared_ptr<Card> card) const {
	//调用另一个版本的chosedcard函数
	// TODO - implement UI_Harvest::chosedCard
	throw "Not yet implemented";
}

void UI_Harvest::chosedCard(const std::shared_ptr<Player> player, const UI_Card* card) const {
	//在卡牌图形上，加上名字，并且调用XXXplayer得到一张牌的函数
//在对应位置上修改players数组
	// TODO - implement UI_Harvest::chosedCard
	throw "Not yet implemented";
}
