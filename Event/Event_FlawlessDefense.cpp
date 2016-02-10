#include "Event_FlawlessDefense.h"

std::shared_ptr<Player> Event_FlawlessDefense::getFirstPlayer() {
	return this->m_firstPlayer;
}

void Event_FlawlessDefense::setFirstPlayer(std::shared_ptr<Player> m_firstPlayer) {
	this->m_firstPlayer = m_firstPlayer;
}

bool Event_FlawlessDefense::getSuccess() {
	return this->m_success;
}

void Event_FlawlessDefense::setSuccess(bool m_success) {
	this->m_success = m_success;
}

void Event_FlawlessDefense::eventResolve() {
	//static Player * currentplayer = nullptr;
//if(currentplayer == nullptr)                                 currentPlayer = firstplayer;
// 封装请求“无懈可击”事件给currentPlayer，设置finishcallback：
//成功：设置success = !success（初始值为false），设置状态为FINISH
//             并再次发动event_FlawlessDefense事件，设置finishcallback：
//                         if(新事件success) success = !success; else 什么也不做
//失败：什么也不做
//else 
//                    ++currentplayer;
//                    if(currentplayer != firstplayer)    继续封装event_FlawlessDefense事件。
//                    else              设置状态为FINISH

	// TODO - implement Event_FlawlessDefense::eventResolve
	throw "Not yet implemented";
}
