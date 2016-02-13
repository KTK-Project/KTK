#include "Rule_MaChao.h"

int Rule_MaChao::getDistance(const std::shared_ptr<Player> player) const {
	//距离-1
	// TODO - implement Rule_MaChao::getDistance
	throw "Not yet implemented";
}

void Rule_MaChao::beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const {
	//如果是杀事件，且处于slashing阶段之前，调用tieqi()
	// TODO - implement Rule_MaChao::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_MaChao::tieQi(const std::shared_ptr<Event_Base>& event) const {
	//发出判定事件，判定成功，直接进入杀成功阶段
	// TODO - implement Rule_MaChao::tieQi
	throw "Not yet implemented";
}
