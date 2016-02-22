#include "Rule_LuXun.h"

std::shared_ptr<Card> Rule_LuXun::removeHandCard(const std::shared_ptr<Card> & card) const {
	//所有失去手牌都得通过此函数。失去最后一张手牌时，立马获得新卡牌
	// TODO - implement Rule_LuXun::removeHandCard
	throw "Not yet implemented";
}

bool Rule_LuXun::canAsCandidate(ECardName cardName) const {
	//no 顺手牵羊和乐不思蜀
	// TODO - implement Rule_LuXun::canAsCandidate
	throw "Not yet implemented";
}
