#include "Rule_DaQiao.h"

void Rule_DaQiao::playCardStage() const {
	//设置国色技能为可用，绑定触摸事件到guoSe()
	// TODO - implement Rule_DaQiao::playCardStage
	throw "Not yet implemented";
}

void Rule_DaQiao::guoSe() const {
	//发出请求卡牌+一个目标事件，成功后发动乐不思蜀
	// TODO - implement Rule_DaQiao::guoSe
	throw "Not yet implemented";
}

void Rule_DaQiao::beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const {
	//检查是否为杀事件&&第一阶段，若是，调用liuLi()
	// TODO - implement Rule_DaQiao::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_DaQiao::liuLi(const std::shared_ptr<Event_Base>& event) const {
	//请求一张牌和攻击范围内的一个目标，此目标不能是杀得使用者，成功后更改杀的目标。
	// TODO - implement Rule_DaQiao::liuLi
	throw "Not yet implemented";
}
