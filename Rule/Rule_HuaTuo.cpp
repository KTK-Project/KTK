#include "Rule_HuaTuo.h"

void Rule_HuaTuo::playCardStage() {
	//设置青囊为可用，绑定技能按钮事件，调用qingnang()
	// TODO - implement Rule_HuaTuo::playCardStage
	throw "Not yet implemented";
}

void Rule_HuaTuo::beforeProcessEvent(std::shared_ptr<Event_Base>& event) {
	//如果是请求桃事件，设置当前回合不是华佗，设置急救技能为可用，设置触摸事件为jijiu()
	// TODO - implement Rule_HuaTuo::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_HuaTuo::qingNang() {
	//发出请求一张卡牌和一个受伤目标的时间，成功后，加血，设置青囊不可用
	// TODO - implement Rule_HuaTuo::qingNang
	throw "Not yet implemented";
}

void Rule_HuaTuo::jiJiu(std::shared_ptr<Event_Base>& event) {
	//更改卡牌过滤器。参考赵云龙胆技能
	// TODO - implement Rule_HuaTuo::jiJiu
	throw "Not yet implemented";
}
