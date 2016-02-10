#include "Rule_Character.h"

Rule_Character::Rule_Character(std::shared_ptr<Player> player) {
	// TODO - implement Rule_Character::Rule_Character
	throw "Not yet implemented";
}

std::shared_ptr<Player> Rule_Character::getPlayer() {
	// TODO - implement Rule_Character::getPlayer
	throw "Not yet implemented";
}

void Rule_Character::setPlayer(std::shared_ptr<Player> player) {
	// TODO - implement Rule_Character::setPlayer
	throw "Not yet implemented";
}

void Rule_Character::readyStage() {
	// TODO - implement Rule_Character::readyStage
	throw "Not yet implemented";
}

void Rule_Character::judgeStage() {
	// TODO - implement Rule_Character::judgeStage
	throw "Not yet implemented";
}

void Rule_Character::drawCardStage() {
	// TODO - implement Rule_Character::drawCardStage
	throw "Not yet implemented";
}

void Rule_Character::playCardStage() {
	// TODO - implement Rule_Character::playCardStage
	throw "Not yet implemented";
}

void Rule_Character::discardStage() {
	// TODO - implement Rule_Character::discardStage
	throw "Not yet implemented";
}

void Rule_Character::roundEndStage() {
	// TODO - implement Rule_Character::roundEndStage
	throw "Not yet implemented";
}

bool Rule_Character::canAsCandidate(Card_Name cardName) {
	// TODO - implement Rule_Character::canAsCandidate
	throw "Not yet implemented";
}

void Rule_Character::asCardGoal(Card_Name cardName) {
	//大乔流离应该重新实现这个函数
//任何卡牌调用usecard都需要先调用这个通知玩家
	// TODO - implement Rule_Character::asCardGoal
	throw "Not yet implemented";
}

void Rule_Character::equip(std::shared_ptr<Card> card) {
	// TODO - implement Rule_Character::equip
	throw "Not yet implemented";
}

void Rule_Character::unequip(std::shared_ptr<Card> card) {
	// TODO - implement Rule_Character::unequip
	throw "Not yet implemented";
}

void Rule_Character::playCard(std::shared_ptr<Card> card) {
	// TODO - implement Rule_Character::playCard
	throw "Not yet implemented";
}

void Rule_Character::drawCard(std::shared_ptr<Card> card) {
	// TODO - implement Rule_Character::drawCard
	throw "Not yet implemented";
}

std::shared_ptr<Card> Rule_Character::removeHandCard(std::shared_ptr<Card> card) {
	//所有失去手牌都得通过此函数。
	// TODO - implement Rule_Character::removeHandCard
	throw "Not yet implemented";
}

int Rule_Character::getDistanceForCard(std::shared_ptr<Card> card) {
	// TODO - implement Rule_Character::getDistanceForCard
	throw "Not yet implemented";
}

int Rule_Character::getDistance(std::shared_ptr<Player> player) {
	//如果参数是马超，距离+1
	// TODO - implement Rule_Character::getDistance
	throw "Not yet implemented";
}

void Rule_Character::beforeProcessEvent(std::shared_ptr<Event_Base>& event) {
	//if(请求闪事件&&八卦阵valid)	调用八卦阵的eventsolve()
	// TODO - implement Rule_Character::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_Character::afterProcessEvent(std::shared_ptr<Event_Base>& event) {
	// TODO - implement Rule_Character::afterProcessEvent
	throw "Not yet implemented";
}
