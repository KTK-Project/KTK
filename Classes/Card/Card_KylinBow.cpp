#include "Card_KylinBow.h"

void Card_KylinBow::eventResolve(const Event_Slash & slashEvent) const {
	//发出“请求布尔”事件：【是否发动麒麟弓】
//若为真，发动“AbandonCard”事件：
//	【响应者为攻击者，被弃置者为被攻击者，设置攻击马和防御马为真，
//	    确定，弃置卡牌，取消，什么也不做】

//善后：设置slashevent的slashstate为hurting
	// TODO - implement Card_KylinBow::eventResolve
	throw "Not yet implemented";
}
