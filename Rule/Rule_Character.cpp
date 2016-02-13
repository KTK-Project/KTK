#include "Rule_Character.h"

Rule_Character::Rule_Character(const std::shared_ptr<Player> player) const {
	// TODO - implement Rule_Character::Rule_Character
	throw "Not yet implemented";
}

std::shared_ptr<Player> Rule_Character::getPlayer() const {
	// TODO - implement Rule_Character::getPlayer
	throw "Not yet implemented";
}

void Rule_Character::setPlayer(const std::shared_ptr<Player> player) const {
	// TODO - implement Rule_Character::setPlayer
	throw "Not yet implemented";
}

void Rule_Character::readyStage() const {
	// TODO - implement Rule_Character::readyStage
	throw "Not yet implemented";
}

void Rule_Character::judgeStage() const {
	// TODO - implement Rule_Character::judgeStage
	throw "Not yet implemented";
}

void Rule_Character::drawCardStage() const {
	// TODO - implement Rule_Character::drawCardStage
	throw "Not yet implemented";
}

void Rule_Character::playCardStage() const {
	// TODO - implement Rule_Character::playCardStage
	throw "Not yet implemented";
}

void Rule_Character::discardStage() const {
	// TODO - implement Rule_Character::discardStage
	throw "Not yet implemented";
}

void Rule_Character::roundEndStage() const {
	// TODO - implement Rule_Character::roundEndStage
	throw "Not yet implemented";
}

bool Rule_Character::canAsCandidate(const Card_Name cardName) const {
	// TODO - implement Rule_Character::canAsCandidate
	throw "Not yet implemented";
}

void Rule_Character::asCardGoal(const Card_Name cardName) const {
	//大乔流离应该重新实现这个函数
//任何卡牌调用usecard都需要先调用这个通知玩家
	// TODO - implement Rule_Character::asCardGoal
	throw "Not yet implemented";
}

void Rule_Character::equip(const std::shared_ptr<Card> card) const {
	// TODO - implement Rule_Character::equip
	throw "Not yet implemented";
}

void Rule_Character::unequip(const std::shared_ptr<Card> card) const {
	// TODO - implement Rule_Character::unequip
	throw "Not yet implemented";
}

void Rule_Character::playCard(const std::shared_ptr<Card> card) const {
	// TODO - implement Rule_Character::playCard
	throw "Not yet implemented";
}

void Rule_Character::drawCard(const std::shared_ptr<Card> card) const {
	// TODO - implement Rule_Character::drawCard
	throw "Not yet implemented";
}

std::shared_ptr<Card> Rule_Character::removeHandCard(const std::shared_ptr<Card> card) const {
	//所有失去手牌都得通过此函数。
	// TODO - implement Rule_Character::removeHandCard
	throw "Not yet implemented";
}

int Rule_Character::getDistanceForCard(const std::shared_ptr<Card> card) const {
	// TODO - implement Rule_Character::getDistanceForCard
	throw "Not yet implemented";
}

int Rule_Character::getDistance(const std::shared_ptr<Player> player) const {
	//如果参数是马超，距离+1
	// TODO - implement Rule_Character::getDistance
	throw "Not yet implemented";
}

void Rule_Character::beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const {
	//if(请求闪事件&&八卦阵valid)	调用八卦阵的eventsolve()
	// TODO - implement Rule_Character::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_Character::afterProcessEvent(const std::shared_ptr<Event_Base>& event) const {
	// TODO - implement Rule_Character::afterProcessEvent
	throw "Not yet implemented";
}
