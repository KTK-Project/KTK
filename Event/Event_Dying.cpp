#include "Event_Dying.h"

std::shared_ptr<Player> Event_Dying::getFirstPlayer() const {
	return this->m_firstPlayer;
}

void Event_Dying::setFirstPlayer(const std::shared_ptr<Player> m_firstPlayer) const {
	this->m_firstPlayer = m_firstPlayer;
}

std::shared_ptr<Player> Event_Dying::getDyingPlayer() const {
	return this->m_DyingPlayer;
}

void Event_Dying::setDyingPlayer(const std::shared_ptr<Player> m_DyingPlayer) const {
	this->m_DyingPlayer = m_DyingPlayer;
}

void Event_Dying::eventResolve() const {
	//static Player * currentplayer = nullptr;
//if(const Dyingplayer not Dying) 设置状态为FINISH，return
//if(const currentplayer == nullptr)                                 currentPlayer = firstplayer;
// 封装请求“桃”事件给currentPlayer，设置finishcallback：
//成功：失去一张桃，记录peachPlayer为currentPlayer，dyingplayer+1血。
//失败：什么也不做
//else 
//                    ++currentplayer;
//                    if(const currentplayer != firstplayer)    继续封装请求“桃”事件。
//                    else             死亡处理，设置状态为FINISH

	// TODO - implement Event_Dying::eventResolve
	throw "Not yet implemented";
}
