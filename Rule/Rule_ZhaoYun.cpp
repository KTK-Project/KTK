#include "Rule_ZhaoYun.h"

void Rule_ZhaoYun::playCardStage() {
	//设置龙胆技能为可用
	// TODO - implement Rule_ZhaoYun::playCardStage
	throw "Not yet implemented";
}

void Rule_ZhaoYun::beforeProcessEvent(std::shared_ptr<Event_Base>& event) {
	//如果是请求杀或闪事件，设置龙胆为可用，如果是forwardplayer，对应技能按钮的事件，调用基类同名函数
	// TODO - implement Rule_ZhaoYun::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_ZhaoYun::afterProcessEvent(std::shared_ptr<Event_Base>& event) {
	//如果是请求闪事件，关闭技能按钮
	// TODO - implement Rule_ZhaoYun::afterProcessEvent
	throw "Not yet implemented";
}

void Rule_ZhaoYun::longDan(std::shared_ptr<Event_Base>& event) {
	//点击龙胆时，执行此函数
	// TODO - implement Rule_ZhaoYun::longDan
	throw "Not yet implemented";
}
