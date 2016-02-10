#include "Event_Dying.h"

std::shared_ptr<Player> Event_Dying::getFirstPlayer() {
	return this->m_firstPlayer;
}

void Event_Dying::setFirstPlayer(std::shared_ptr<Player> m_firstPlayer) {
	this->m_firstPlayer = m_firstPlayer;
}

std::shared_ptr<Player> Event_Dying::getDyingPlayer() {
	return this->m_DyingPlayer;
}

void Event_Dying::setDyingPlayer(std::shared_ptr<Player> m_DyingPlayer) {
	this->m_DyingPlayer = m_DyingPlayer;
}

void Event_Dying::eventResolve() {
	//static Player * currentplayer = nullptr;
//if(Dyingplayer not Dying) 设置状态为FINISH，return
//if(currentplayer == nullptr)                                 currentPlayer = firstplayer;
// 封装请求“桃”事件给currentPlayer，设置finishcallback：
//成功：失去一张桃，记录peachPlayer为currentPlayer，dyingplayer+1血。
//失败：什么也不做
//else 
//                    ++currentplayer;
//                    if(currentplayer != firstplayer)    继续封装请求“桃”事件。
//                    else             死亡处理，设置状态为FINISH

	// TODO - implement Event_Dying::eventResolve
	throw "Not yet implemented";
}
