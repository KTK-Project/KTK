#include "Rule_SunQuan.h"

void Rule_SunQuan::playCardStage() {
	//设置制衡为可用，绑定触摸事件到zhiheng()
	// TODO - implement Rule_SunQuan::playCardStage
	throw "Not yet implemented";
}

void Rule_SunQuan::afterProcessEvent(std::shared_ptr<Event_Base>& event) {
	//如果是濒死事件，调用jiuyuan()
	// TODO - implement Rule_SunQuan::afterProcessEvent
	throw "Not yet implemented";
}

void Rule_SunQuan::zhiHeng() {
	//发出请求卡牌事件，结束后，弃牌加摸牌。
	// TODO - implement Rule_SunQuan::zhiHeng
	throw "Not yet implemented";
}

void Rule_SunQuan::jiuYuan(std::shared_ptr<Event_Base>& event) {
	//濒死者为孙权，且他为主公，且peachplayer是吴势力，加一血。
	// TODO - implement Rule_SunQuan::jiuYuan
	throw "Not yet implemented";
}
