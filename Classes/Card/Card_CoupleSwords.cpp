#include "Card_CoupleSwords.h"

void Card_CoupleSwords::eventResolve(const Event_Slash & slashEvent) const {
	// TODO - implement Card_CoupleSwords::eventResolve
	throw "Not yet implemented";
	//发出“请求布尔值”事件：【响应者为攻击角色。（是否发动雌雄双股剑技能？）】
//若为真，发出“请求手牌”事件：
//	【响应者为被攻击者。若确定，被攻击者弃置一手牌，否则，攻击者摸一张牌。】
//若为假，啥也不做

//善后：设置slashevent的slashstate为armorCheckBeforeSlash
}
