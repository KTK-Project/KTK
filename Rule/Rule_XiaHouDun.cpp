#include "Rule_XiaHouDun.h"

void Rule_XiaHouDun::beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const {
	//如果为伤害事件，且事件状态为finish，夏侯惇未死，询问是否发动刚烈：
//	是：调用gangLie()
//	否：什么也不做
//调用基类同名函数
	// TODO - implement Rule_XiaHouDun::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_XiaHouDun::gangLie(const std::shared_ptr<Event_Hurt>& event) const {
	//发动判定事件：
//	成功：向伤害来源发出请求两张手牌事件：
//		响应：失去两张牌
//		不响应：受到你对他的一点伤害。
//	失败：啥也不做。
	// TODO - implement Rule_XiaHouDun::gangLie
	throw "Not yet implemented";
}
