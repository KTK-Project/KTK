#include "Event_Harvest.h"

std::shared_ptr<Player> Event_Harvest::getCurrentPlayer() const {
	return m_currentPlayer.lock();
}

void Event_Harvest::setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer) {
	m_currentPlayer = currentPlayer;
}

void Event_Harvest::eventResolve() const {
	//static player * currentplayer = nullptr;
//static Event_GetCardFromHarvest *  event = nullptr;
//if(!event)	第一次执行：currentPlayer = playcardplayer
//封装为Event_GetCardFromHarvest，interactPlayer为currentplayer，设置finishCallback：
//成功：把选中的牌给interactPlayer
//失败：啥也不做
//else
//             ++currentplayer;
//             if(const currentplayer != playcardplayer) 
//                          把event的inreactplayer设置为currentplayer，重新压入Eventmanager
//             else
//                         各种善后处理：两个静态成员设置为空指针，注意析构，设置事件状态为FINISH
	// TODO - implement Event_Harvest::eventResolve
	throw "Not yet implemented";
}
