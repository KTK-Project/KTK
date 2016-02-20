#include "Card.h"

using std::shared_ptr;
using std::vector;

//	Todo: stl
Card::Card(ECardName name, ECardSuit suit, int number) {
	//设置名字，花色，颜色，数字，但不用设置卡牌类型
	throw "Not yet implemented";
}

//	Todo: stl
ECardName Card::getName() const {
	// TODO - implement Card::getName
	throw "Not yet implemented";
}

//	Todo: stl
ECardType Card::getType() const {
	// TODO - implement Card::getType
	throw "Not yet implemented";
}

//	Todo: stl
ECardSuit Card::getSuit() const {
	// TODO - implement Card::getSuit
	throw "Not yet implemented";
}

//	Todo: stl
ECardColor Card::getColor() const {
	// TODO - implement Card::getColor
	throw "Not yet implemented";
}

//	Todo: stl
int Card::getNumber() const {
	throw "Not yet implemented";
}

int Card::getGoalPlayerQuantity(const shared_ptr<Player> & requester) const {
//	Todo: stm
	throw "Not yet implemented";
}

vector<shared_ptr<Player>> Card::getCandidates(const shared_ptr<Player> playCardPlayer) const {
//	Todo: stm
	// TODO - implement Card::getCandidate
	throw "Not yet implemented";
	//判断因素：
//1.距离因素（X）调用getdistanceforCard()
//2.是否死亡
//3.对方有特殊技能（诸葛亮-空城，陆逊-谦逊）（X）
//4.对方是否有卡牌（借刀杀人，顺手牵羊，过河拆桥）（X）
}

void Card::onUpping() const {
	// TODO - implement Card::onUpping
	throw "Not yet implemented";
	//forwardPlayer专用函数
//调用getgoalPlayerquantity，如果为0，则直接使确定按钮生效。
//否则获取候选目标，封装requesetgoal事件，设置finishcallback是：
//如果事件成功usecard
//否则啥也不做
}

void Card::useCard(const shared_ptr<Player> playCardPlayer, const vector<shared_ptr<Player>>& goalPlayer) const {
	// TODO - implement Card::useCard
	throw "Not yet implemented";
	//forwardPlayer专用函数
//调用getgoalPlayerquantity，如果为0，则直接使确定按钮生效。
//否则获取候选目标，封装requesetgoal事件，设置finishcallback是：
//如果事件成功usecard
//否则啥也不做
}

//	Todo: stl
void Card::setName(ECardName name) {
	throw "Not yet implemented";
}

//	Todo: stl
void Card::setType(ECardType type) {
	throw "Not yet implemented";
}

//	Todo: stl
void Card::setSuit(ECardSuit suit) {
	throw "Not yet implemented";
}

//	Todo: stl
void Card::setColor(ECardColor color) {
	throw "Not yet implemented";
}

//	Todo: stl
void Card::setNumber(int number) {
	throw "Not yet implemented";
}
