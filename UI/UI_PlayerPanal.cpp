#include "UI_PlayerPanal.h"

void UI_PlayerPanal::initWithPlayer(const std::shared_ptr<Player> player) const {
	// TODO - implement UI_PlayerPanal::initWithPlayer
	throw "Not yet implemented";
	//创建所有组件，addchild以后调用各个组件的refresh
}

std::shared_ptr<Player> UI_PlayerPanal::getPlayer() const {
	// TODO - implement UI_PlayerPanal::getPlayer
	throw "Not yet implemented";
}

void UI_PlayerPanal::setPlayer(const std::shared_ptr<Player> player) const {
	// TODO - implement UI_PlayerPanal::setPlayer
	throw "Not yet implemented";
	//调用initwithplayer
}

UI_ID* UI_PlayerPanal::getID() const {
	// TODO - implement UI_PlayerPanal::getID
	throw "Not yet implemented";
	//所有的get以前都要检查是否为空指针，若为空，报错，提醒要先调用initwithplayer
}

UI_HP* UI_PlayerPanal::getHP() const {
	// TODO - implement UI_PlayerPanal::getHP
	throw "Not yet implemented";
}

UI_Position* UI_PlayerPanal::getPosition() const {
	// TODO - implement UI_PlayerPanal::getPosition
	throw "Not yet implemented";
}

UI_HandCardQuantity* UI_PlayerPanal::getHandCardQuantity() const {
	// TODO - implement UI_PlayerPanal::getHandCardQuantity
	throw "Not yet implemented";
}

UI_EquipmentPanal* UI_PlayerPanal::getEquipmentPanal() const {
	// TODO - implement UI_PlayerPanal::getEquipmentPanal
	throw "Not yet implemented";
}

UI_JudgeIcon* UI_PlayerPanal::getJudgeIcon() const {
	// TODO - implement UI_PlayerPanal::getJudgeIcon
	throw "Not yet implemented";
}

UI_InformationBox* UI_PlayerPanal::getInformationBox() const {
	// TODO - implement UI_PlayerPanal::getInformationBox
	throw "Not yet implemented";
}

UI_LogBox* UI_PlayerPanal::getLogBox() const {
	// TODO - implement UI_PlayerPanal::getLogBox
	throw "Not yet implemented";
}

void UI_PlayerPanal::drawCards(const std::vector<std::shared_ptr<Card>>& cards) const {
	//直接获取cards.size()，
//再为这几个卡牌封装为反面的卡牌并给予一个移动，隐去，removechild的动作
	// TODO - implement UI_PlayerPanal::drawCards
	throw "Not yet implemented";
}

EPlayerColor UI_PlayerPanal::getPlayerColor() const {
	return this->m_playerColor;
}

void UI_PlayerPanal::setPlayerColor(const EPlayerColor m_playerColor) const {
	//设置面板颜色
	throw "Not yet implemented";
}

EPlayerPanalState UI_PlayerPanal::getPlayerPanalState() const {
	return this->m_playerPanalState;
}

void UI_PlayerPanal::setPlayerPanalState(const EPlayerPanalState m_playerPanalState) const {
	//设置背景,如果为可选择的，设置事件：触发则塞入selectedPlayer中
	throw "Not yet implemented";
}

void UI_PlayerPanal::clean() const {
	// TODO - implement UI_PlayerPanal::clean
	throw "Not yet implemented";
}
