#include "UI_PlayerPanal.h"

void UI_PlayerPanal::initWithPlayer(std::shared_ptr<Player> player) {
	// TODO - implement UI_PlayerPanal::initWithPlayer
	throw "Not yet implemented";
	//创建所有组件，addchild以后调用各个组件的refresh
}

std::shared_ptr<Player> UI_PlayerPanal::getPlayer() {
	// TODO - implement UI_PlayerPanal::getPlayer
	throw "Not yet implemented";
}

void UI_PlayerPanal::setPlayer(std::shared_ptr<Player> player) {
	// TODO - implement UI_PlayerPanal::setPlayer
	throw "Not yet implemented";
	//调用initwithplayer
}

UI_ID* UI_PlayerPanal::getID() {
	// TODO - implement UI_PlayerPanal::getID
	throw "Not yet implemented";
	//所有的get以前都要检查是否为空指针，若为空，报错，提醒要先调用initwithplayer
}

UI_HP* UI_PlayerPanal::getHP() {
	// TODO - implement UI_PlayerPanal::getHP
	throw "Not yet implemented";
}

UI_Position* UI_PlayerPanal::getPosition() {
	// TODO - implement UI_PlayerPanal::getPosition
	throw "Not yet implemented";
}

UI_HandCardQuantity* UI_PlayerPanal::getHandCardQuantity() {
	// TODO - implement UI_PlayerPanal::getHandCardQuantity
	throw "Not yet implemented";
}

UI_EquipmentPanal* UI_PlayerPanal::getEquipmentPanal() {
	// TODO - implement UI_PlayerPanal::getEquipmentPanal
	throw "Not yet implemented";
}

UI_JudgeIcon* UI_PlayerPanal::getJudgeIcon() {
	// TODO - implement UI_PlayerPanal::getJudgeIcon
	throw "Not yet implemented";
}

UI_InformationBox* UI_PlayerPanal::getInformationBox() {
	// TODO - implement UI_PlayerPanal::getInformationBox
	throw "Not yet implemented";
}

UI_LogBox* UI_PlayerPanal::getLogBox() {
	// TODO - implement UI_PlayerPanal::getLogBox
	throw "Not yet implemented";
}

void UI_PlayerPanal::drawCards(std::vector<std::shared_ptr<Card>>& cards) {
	//直接获取cards.size()，
//再为这几个卡牌封装为反面的卡牌并给予一个移动，隐去，removechild的动作
	// TODO - implement UI_PlayerPanal::drawCards
	throw "Not yet implemented";
}

Player_Color UI_PlayerPanal::getPlayerColor() {
	return this->m_playerColor;
}

void UI_PlayerPanal::setPlayerColor(Player_Color m_playerColor) {
	//设置面板颜色
	this->m_playerColor = m_playerColor;
}

PlayerPanalState UI_PlayerPanal::getPlayerPanalState() {
	return this->m_playerPanalState;
}

void UI_PlayerPanal::setPlayerPanalState(PlayerPanalState m_playerPanalState) {
	//设置背景,如果为可选择的，设置事件：触发则塞入selectedPlayer中
	this->m_playerPanalState = m_playerPanalState;
}

void UI_PlayerPanal::clean() {
	// TODO - implement UI_PlayerPanal::clean
	throw "Not yet implemented";
}
