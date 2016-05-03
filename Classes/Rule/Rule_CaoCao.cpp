#include "Rule_CaoCao.h"

void Rule_CaoCao::beforeProcessEvent(const std::shared_ptr<Event_Base> & event) const {
	//如果事件为请求闪事件，发出请求布尔值事件，询问是否发动护驾：
//	是：发动护驾
//	否：调用基类preprocessingEvent
//如果为伤害事件，发出请求布尔值事件，询问是否发动奸雄：
//	是：发动奸雄
//	否：调用基类preprocessingEvent
	// TODO - implement Rule_CaoCao::beforeProcessEvent
	throw "Not yet implemented";
}

void Rule_CaoCao::huJia(const std::shared_ptr<Event_RequestCard> & event) const {
	//static Player * currentPlayer = nullptr;
//static std::shared_ptr<Event_RequestCard> event = nullptr;
//static bool 八卦阵used = false;
//if(!event)	
//	event = 参数;
//	currentPlayer = 曹操
//currentplayer = getnextPlayer([](){}) const;
//if(const currentPlayr != 曹操)
//	给currentplayer发出请求布尔值事件【是否为主公护驾】：
//		是：if(有八卦阵且八卦阵used)，设置currentplayer八卦阵valid = false，
//		        else if(有八卦阵且!八卦阵used) 八卦阵used = true;
//		        发出请求闪事件：
//			满足：获得闪给event，护驾成功处理+护驾结束处理
//			不满足：继续调用hujia()
//			必做：设置currentplayer八卦阵valid = true;
//		否：继续调用hujia()
//else
//	护驾失败处理+护驾结束处理

//护驾失败处理：调用基类的preprocessingEvent
//护驾成功处理：把闪给当前事件，设置为响应成功
//护驾结束处理：所有魏将的八卦阵valid = true，三静态变量清零。
	// TODO - implement Rule_CaoCao::huJia
	throw "Not yet implemented";
}

void Rule_CaoCao::jianXiong(const std::shared_ptr<Event_Hurt> & event) const {
	//获的得事件中的卡牌。
	// TODO - implement Rule_CaoCao::jianXiong
	throw "Not yet implemented";
}
