#include "Rule_ZhenJi.h"

void Rule_ZhenJi::readyStage() const {
	//调用luoshen()
	// TODO - implement Rule_ZhenJi::readyStage
	throw "Not yet implemented";
}

void Rule_ZhenJi::beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const {
	//如果事件为请求闪事件，设置倾国为可用，如果是forwardplayer，对应按钮的回调函数，调用基类同名函数
	// TODO - implement Rule_ZhenJi::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_ZhenJi::qingGuo(const std::shared_ptr<Event_RequestCard> & event) const {
	//发出请求黑色卡牌事件：
//	响应：黑色卡牌给请求闪事件
//	不响应：啥也不做
	// TODO - implement Rule_ZhenJi::qingGuo
	throw "Not yet implemented";
}

void Rule_ZhenJi::luoShen() const {
	//请求布尔值事件，【是否发动洛神】
//	是：发出判定事件：
//		成功：获得判定牌，调用luoshen()
//		失败：啥也不做
//	否：啥也不做
	// TODO - implement Rule_ZhenJi::luoShen
	throw "Not yet implemented";
}
