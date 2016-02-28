#include "Event_Sabotage.h"

const std::shared_ptr<Player> & Event_Sabotage::getGoalPlayer() const {
	return m_goalPlayer;
}

void Event_Sabotage::setGoalPlayer(const std::shared_ptr<Player> & goalPlayer) {
	m_goalPlayer = goalPlayer;
}

void Event_Sabotage::eventResolve() const {
	//封装事件Event_takePlayerCard，设置finishCallBack：
//成功：获取Card *，在目标player中删除此牌
//失败：返回出牌阶段
	// TODO - implement Event_Sabotage::eventResolve
	throw "Not yet implemented";
}
