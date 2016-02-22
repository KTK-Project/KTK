#include "Rule_SiMaYi.h"

void Rule_SiMaYi::beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const {
	//如果为伤害事件，且事件状态为finish，司马懿未死，询问是否发动反馈：
//	是：调用fanKui()
//	否：什么也不做
//调用基类同名函数

	// TODO - implement Rule_SiMaYi::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_SiMaYi::fanKui(const std::shared_ptr<Event_Hurt>& event) const {
	//如果伤害来源有牌，发动请求弃牌事件：
//	成功：获取该牌
//	失败：啥也不做
	// TODO - implement Rule_SiMaYi::fanKui
	throw "Not yet implemented";
}

void Rule_SiMaYi::guiCai(const std::shared_ptr<Event_Judge>& event) const {
	//发动请求卡牌事件：
//	响应：修改判定事件的判定卡牌。
//	不响应：什么也 不做。
	// TODO - implement Rule_SiMaYi::guiCai
	throw "Not yet implemented";
}
