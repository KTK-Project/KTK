#include "Rule_LiuBei.h"

void Rule_LiuBei::drawCardStage() const {
	//设置仁德为可用，检查是否可杀，设置激将可用
	// TODO - implement Rule_LiuBei::drawCardStage
	throw "Not yet implemented";
}

void Rule_LiuBei::beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const {
	//如果是请求杀事件，调用设置激将技能为可用
	// TODO - implement Rule_LiuBei::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_LiuBei::jiJiang(const std::shared_ptr<Event_Base>& event) const {
	//给蜀将封装请求杀事件。参考曹操的护驾技能
	// TODO - implement Rule_LiuBei::jiJiang
	throw "Not yet implemented";
}
