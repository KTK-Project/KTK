#include "Event_Theft.h"

std::shared_ptr<Player> Event_Theft::getGoalPlayer() const {
	return m_goalPlayer.lock();
}

void Event_Theft::setGoalPlayer(const std::shared_ptr<Player> & goalPlayer) {
	m_goalPlayer = goalPlayer;
}

void Event_Theft::eventResolve() const {
	//封装事件Event_takePlayerCard，设置finishCallBack：
//成功：获取Card *，在目标player中删除此牌，playCardplayer获得此牌
//失败：返回出牌阶段
	// TODO - implement Event_Theft::eventResolve
	throw "Not yet implemented";
}
