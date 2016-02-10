#include "Card.h"

Card_Color Card::getColor() {
	// TODO - implement Card::getColor
	throw "Not yet implemented";
}

Card_Name Card::getName() {
	// TODO - implement Card::getName
	throw "Not yet implemented";
}

Card_Suit Card::getSuit() {
	// TODO - implement Card::getSuit
	throw "Not yet implemented";
}

Card_Type Card::getType() {
	// TODO - implement Card::getType
	throw "Not yet implemented";
}

int Card::getGoalPlayerQuantity(std::shared_ptr<Player> requester)
{
	throw "123123";
}

std::vector<std::shared_ptr<Player>> Card::getCandidate(std::shared_ptr<Player> playCardPlayer) {
	// TODO - implement Card::getCandidate
	throw "Not yet implemented";
	//判断因素：
//1.距离因素（X）调用getdistanceforCard()
//2.是否死亡
//3.对方有特殊技能（诸葛亮-空城，陆逊-谦逊）（X）
//4.对方是否有卡牌（借刀杀人，顺手牵羊，过河拆桥）（X）
}


void Card::onUpping() {
	// TODO - implement Card::onUpping
	throw "Not yet implemented";
	//forwardPlayer专用函数
//调用getgoalPlayerquantity，如果为0，则直接使确定按钮生效。
//否则获取候选目标，封装requesetgoal事件，设置finishcallback是：
//如果事件成功usecard
//否则啥也不做
}

void Card::useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer) {
	// TODO - implement Card::useCard
	throw "Not yet implemented";
	//forwardPlayer专用函数
//调用getgoalPlayerquantity，如果为0，则直接使确定按钮生效。
//否则获取候选目标，封装requesetgoal事件，设置finishcallback是：
//如果事件成功usecard
//否则啥也不做
}
