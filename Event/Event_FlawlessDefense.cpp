#include "Event_FlawlessDefense.h"

std::shared_ptr<Player> Event_FlawlessDefense::getFirstPlayer() const {
	return this->m_firstPlayer;
}

void Event_FlawlessDefense::setFirstPlayer(const std::shared_ptr<Player> m_firstPlayer) const {
	this->m_firstPlayer = m_firstPlayer;
}

bool Event_FlawlessDefense::getSuccess() const {
	return this->m_success;
}

void Event_FlawlessDefense::setSuccess(const bool m_success) const {
	this->m_success = m_success;
}

void Event_FlawlessDefense::eventResolve() const {
	//static Player * currentplayer = nullptr;
//if(const currentplayer == nullptr)                                 currentPlayer = firstplayer;
// 封装请求“无懈可击”事件给currentPlayer，设置finishcallback：
//成功：设置success = !success（初始值为false），设置状态为FINISH
//             并再次发动event_FlawlessDefense事件，设置finishcallback：
//                         if(新事件success) success = !success; else 什么也不做
//失败：什么也不做
//else 
//                    ++currentplayer;
//                    if(const currentplayer != firstplayer)    继续封装event_FlawlessDefense事件。
//                    else              设置状态为FINISH

	// TODO - implement Event_FlawlessDefense::eventResolve
	throw "Not yet implemented";
}
