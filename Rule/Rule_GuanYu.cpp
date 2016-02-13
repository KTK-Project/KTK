#include "Rule_GuanYu.h"

void Rule_GuanYu::playCardStage() const {
	//设置武圣技能为可用
	// TODO - implement Rule_GuanYu::playCardStage
	throw "Not yet implemented";
}

void Rule_GuanYu::beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const {
	//如果是请求卡牌事件，设置武圣技能为可用，触摸事件为调用wuSheng()
	// TODO - implement Rule_GuanYu::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_GuanYu::afterProcessEvent(const std::shared_ptr<Event_Base>& event) const {
	//如果是请求卡牌事件，关闭技能按钮
	// TODO - implement Rule_GuanYu::afterProcessEvent
	throw "Not yet implemented";
}

void Rule_GuanYu::wuSheng() const {
	//搞一下卡牌过滤器就行了，参考赵云龙胆技能
	// TODO - implement Rule_GuanYu::wuSheng
	throw "Not yet implemented";
}
