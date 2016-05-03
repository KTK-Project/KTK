#include "Rule_GuoJia.h"

void Rule_GuoJia::beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const {
	//如果为判定事件，且事件状态为finish，询问是否发动天妒：
//	是：调用tianDu()
//	否：什么也不做
//如果为伤害事件，且事件状态为finish，郭嘉未死，询问是否发动遗计：
//	是：调用yiji()
//	否：什么也不做
//调用基类同名函数

	// TODO - implement Rule_GuoJia::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_GuoJia::tianDu(const std::shared_ptr<Event_Judge> & event) const {
	//获得事件中的判定牌。
	// TODO - implement Rule_GuoJia::tianDu
	throw "Not yet implemented";
}

void Rule_GuoJia::yiJi(const std::shared_ptr<Event_Hurt> & event) const {
	//根据伤害事件的伤害血量，获得2倍的卡牌，并且发出请求卡牌和目标事件：【过滤器为最近获得的卡牌，数量不限】
//	响应：将卡牌给对应目标，检查是否还有剩余卡牌，如有，继续发出当前事件
//	不响应：什么也不做。
	// TODO - implement Rule_GuoJia::yiJi
	throw "Not yet implemented";
}
