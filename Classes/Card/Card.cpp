#include "Card.h"

using std::shared_ptr;
using std::vector;

Card::Card(ECardName name, ECardSuit suit, int number) {
	m_name = name;
	m_suit = suit;
	m_number = number;
	switch (suit) {
		case ECardSuit::CLUB:
			m_color = ECardColor::BLACK;
			break;
		case ECardSuit::DIAMOND:
			m_color = ECardColor::RED;
			break;
		case ECardSuit::HEART:
			m_color = ECardColor::RED;
			break;
		case ECardSuit::SPADE:
			m_color = ECardColor::BLACK;
			break;
		default:
			throw "Can't find this kind of suit";
			break;
	}
}

ECardName Card::getName() const {
	return m_name;
}

ECardType Card::getType() const {
	return m_type;
}

ECardSuit Card::getSuit() const {
	return m_suit;
}

ECardColor Card::getColor() const {
	return m_color;
}

int Card::getNumber() const {
	return m_number;
}

int Card::getGoalPlayerQuantity(const shared_ptr<Player> & requester) const {
	return 0;
}

std::vector<std::shared_ptr<Player>> Card::getCandidates(const std::shared_ptr<Player> & playCardPlayer) const {
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

void Card::useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const {
	// TODO - implement Card::useCard
	throw "Not yet implemented";
	//forwardPlayer专用函数
	//调用getgoalPlayerquantity，如果为0，则直接使确定按钮生效。
	//否则获取候选目标，封装requesetgoal事件，设置finishcallback是：
	//如果事件成功usecard
	//否则啥也不做
}

void Card::setType(ECardType type) {
	m_type = type;
}
