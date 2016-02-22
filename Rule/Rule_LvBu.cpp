#include "Rule_LvBu.h"

void Rule_LvBu::beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const {
	//如果是杀事件或者是决斗事件，调用wushaung()
	// TODO - implement Rule_LvBu::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_LvBu::wuShuang(const std::shared_ptr<Event_Base>& event) const {
	//static Event* currentEvent = nullptr
//static bool again = true;
//if(事件!=currentEvent)	更新currentevent，设置again为true

//如果（决斗事件）
//如果currentplayer为吕布
//	if(const again)，设置为另一个玩家。again = false;
//	else	设置again = true;

//如果（杀事件&&吕布杀）
//如果是slashfail && again   设置为slashing，again = flase;
	// TODO - implement Rule_LvBu::wuShuang
	throw "Not yet implemented";
}
