#include "Event_ArrowRain.h"

void Event_ArrowRain::eventResolve() const {
	//调用finishCallback
	//static player * currentplayer = nullptr;
//if(!currentplayer)             第一次执行：currentPlayer = playcardplayer的下一个玩家
//封装为Event_RequestCard，请求闪，interactPlayer为currentplayer，设置finishCallback：
//成功：失去一张闪，不伤血
//失败：伤害一点血
//else
//             ++currentplayer;
//             if(const currentplayer != playcardplayer) 
//                          继续封装请求闪事件，把inreactplayer设置为currentplayer
//             else
//                         各种善后处理：静态成员设置为空指针，设置事件状态为FINISH
	// TODO - implement Event_ArrowRain::eventResolve
	throw "Not yet implemented";
}
