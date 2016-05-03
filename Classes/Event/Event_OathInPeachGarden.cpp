#include "Event_OathInPeachGarden.h"

std::shared_ptr<Player> Event_OathInPeachGarden::getCurrentPlayer() const {
	return m_currentPlayer.lock();
}

void Event_OathInPeachGarden::setCurrentPlayer(const std::shared_ptr<Player> & currentPlayer) {
	m_currentPlayer = currentPlayer;
}

void Event_OathInPeachGarden::eventResolve() const {
	//static player * currentplayer = nullptr;
//if(!currentplayer)             第一次执行：currentPlayer = playcardplayer
//                 if(const currentplayer未满血)	+1血
//                 else                                                           啥也不做
//                 ++currentPlayer
	// TODO - implement Event_OathInPeachGarden::eventResolve
	throw "Not yet implemented";
}
