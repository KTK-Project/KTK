#include "Card_IceSword.h"

void Card_IceSword::eventResolve(const Event_Slash & slashEvent) const {
	//发出“请求布尔值”事件：【响应者为攻击者。（是否发动寒冰剑？）】
//若为真，发动两次AbandonCard事件：
//	【响应者为攻击者，被弃置者为被攻击者，确定，弃置选择的卡牌，取消，结束事件】
//	设置为eventstate为finish
//若为假，设置slashEvent的slashstate为hurting
	// TODO - implement Card_IceSword::eventResolve
	throw "Not yet implemented";
}
