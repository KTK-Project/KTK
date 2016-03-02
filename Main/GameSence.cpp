#include "cocos2d.h"
#include "GameSence.h"
#include "Manager/TextManager.h"
#include "Card/Card_Slash.h"
#include <memory>
#include "UI/UI_SkillPanal.h"

using namespace cocos2d;

bool GameSence::init() {
	auto size = Director::getInstance()->getVisibleSize();
	auto l = LayerColor::create(Color4B::GRAY);
	addChild(l, -10);

// 	auto card_ptr = std::make_shared<Card_Slash>(ECardSuit::DIAMOND, 13);
// 	auto ui_card = UI_Card::create(card_ptr);
// 	ui_card->setScale(0.6);
// 	ui_card->setPosition(size.width / 2, size.height / 2);
// 	addChild(ui_card);
// 	ui_card->setCanUp(true);

	auto player = std::make_shared<Player>();
	player->setCharacter(Character(ECharName::DAQIAO));
	auto skillPanal = UI_SkillPanal::create(player);
	skillPanal->setPosition(size.width / 2, size.height / 2);
	player->getCharacter().getSkillList().getSkillByIndex(0).setSkillState(ESkillState::CANUSE);
	skillPanal->refresh();
	addChild(skillPanal);

	auto player1 = std::make_shared<Player>();
	player1->setCharacter(Character(ECharName::ZHAOYUN));
	auto skillPanal1 = UI_SkillPanal::create(player1);
	skillPanal1->setPosition(size.width / 2, size.height / 2 - 25);
	skillPanal1->setSkillState(ESkillName::LONGDAN, ESkillState::USING);
	addChild(skillPanal1);

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
