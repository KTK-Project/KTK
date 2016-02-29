#include <string>
#include "cocos2d.h"
#include "GameSence.h"
#include "Manager/TextManager.h"
#include <fstream>
#include "UI/UI_Card.h"
#include "Card\Card_AllOutOfNone.h"
#include "Card/Card_Slash.h"

using namespace cocos2d;

bool GameSence::init() {
	auto size = Director::getInstance()->getVisibleSize();
	auto l = LayerColor::create(Color4B::GRAY);
	addChild(l, -10);

	auto card_ptr = std::make_shared<Card_Slash>(ECardSuit::DIAMOND, 13);
	auto ui_card = UI_Card::create(card_ptr);
	ui_card->setScale(1);
	ui_card->setPosition(size.width / 2 - 100, size.height / 2);
	addChild(ui_card);
	ui_card->setCanUp(true);

	auto card_ptr2 = std::make_shared<Card_Slash>(ECardSuit::CLUB, 12);
	auto ui_card2 = UI_Card::create(card_ptr2);
	ui_card2->setScale(1);
	ui_card2->setPosition(size.width / 2 + 100, size.height / 2);
	addChild(ui_card2);
	ui_card2->setCanUp(true);
	ui_card2->setDark(true);


	return true;
}

cocos2d::Scene * GameSence::scene() {
	auto scene = Scene::create();
	GameSence * Layer = GameSence::create();
	scene->addChild(Layer);
	return scene;
}

UI_Desktop * GameSence::getDesktop() const {
	// TODO - implement UI_GameSence::getDesktop
	throw "Not yet implemented";
}

UI_LogBox * GameSence::getLogBox() const {
	// TODO - implement UI_GameSence::getLogBox
	throw "Not yet implemented";
}

UI_PlayerPanal * GameSence::getPlayerPanal(const std::shared_ptr<Player> & player) const {
	// TODO - implement UI_GameSence::getPlayerPanal
	throw "Not yet implemented";
}
