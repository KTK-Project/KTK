#include <string>
#include "cocos2d.h"
#include "GameSence.h"
#include "Manager/TextManager.h"
#include <fstream>

using namespace cocos2d;

bool GameSence::init() {
	auto size = Director::getInstance()->getVisibleSize();
	TextManager m;
	auto label = Label::create(m.getTextOfCardDescription(ECardName::ALLOUTOFNONE), "ziti.otf", 10);
	label->setPosition(size.width / 2, size.height / 2);
	addChild(label);
	return true;
}

cocos2d::Scene* GameSence::scene() {
	auto scene = Scene::create();
	GameSence * Layer = GameSence::create();
	scene->addChild(Layer);
	return scene;
}

UI_Desktop* GameSence::getDesktop() const {
	// TODO - implement UI_GameSence::getDesktop
	throw "Not yet implemented";
}

UI_LogBox* GameSence::getLogBox() const {
	// TODO - implement UI_GameSence::getLogBox
	throw "Not yet implemented";
}

UI_PlayerPanal* GameSence::getPlayerPanal(const std::shared_ptr<Player> player) const {
	// TODO - implement UI_GameSence::getPlayerPanal
	throw "Not yet implemented";
}
