#include "Event_Dying.h"

//	Todo:stl
const std::shared_ptr<Player> & Event_Dying::getFirstPlayer() const {
	return this->m_firstPlayer;
}

//	Todo:stl
void Event_Dying::setFirstPlayer(const std::shared_ptr<Player> & firstPlayer) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::shared_ptr<Player> & Event_Dying::getDyingPlayer() const {
	return this->m_dyingPlayer;
}

//	Todo:stl
void Event_Dying::setDyingPlayer(const std::shared_ptr<Player> & dyingPlayer) {
	throw "Not yet implemented";
}

//	Todo:stl
const std::shared_ptr<Player> & Event_Dying::getPeachPlayer() const {
	return m_peachPlayer;
}

//	Todo:stl
void Event_Dying::setPeachPlayer(const std::shared_ptr<Player> & peachPlayer) {
	m_peachPlayer = peachPlayer;
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
