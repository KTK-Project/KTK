#include "Card_DragonBroadSword.h"

void Card_DragonBroadSword::eventResolve(const Event_Slash& slashEvent) const {
	// TODO - implement Card_DragonBroadSword::eventResolve
	throw "Not yet implemented";
	//发出“请求杀”事件：【响应者为攻击者】
//若响应，重置slashevent的卡牌杀，设置slashevent的slashstate为weaponCheckBeforeSlash。
//否则，设置eventstate为finish。
}
