#include "cocos2d.h"
#include "GameSence.h"
#include "Manager/TextManager.h"
#include "Card/Card_Slash.h"
#include <memory>
#include "UI/UI_SkillPanal.h"
#include "UI/UI_DebugBox.h"
#include "Card/Card_DrownInHappiness.h"
#include "Card/Card_Lightning.h"
#include "Manager/GameManager.h"

using namespace cocos2d;

bool GameSence::init() {
	auto size = Director::getInstance()->getVisibleSize();
	auto l = LayerColor::create(Color4B::GRAY);
	addChild(l, -10);

	auto lineX = LayerColor::create(Color4B::RED);
	lineX->setContentSize(Size(size.width, 3));
	lineX->setPosition(0, size.height / 2);
	addChild(lineX, 100);

	auto lineY = LayerColor::create(Color4B::RED);
	lineY->setContentSize(Size(3, size.height));
	lineY->setPosition(size.width / 2, 0);
	addChild(lineY, 100);


// 	auto card_ptr = std::make_shared<Card_Slash>(ECardSuit::DIAMOND, 13);
// 	auto ui_card = UI_Card::create(card_ptr);
// 	ui_card->setScale(0.6);
// 	ui_card->setPosition(size.width / 2, size.height / 2);
// 	addChild(ui_card);
// 	ui_card->setCanUp(true);

// 	auto player = std::make_shared<Player>();
// 	player->setCharacter(Character(ECharName::DAQIAO));
// 	auto skillPanal = UI_SkillPanal::create(player);
// 	skillPanal->setPosition(size.width / 2, size.height / 2);
// 	player->getCharacter().getSkillList().getSkillByIndex(0).setSkillState(ESkillState::CANUSE);
// 	skillPanal->refresh();
// 	addChild(skillPanal);
// 
// 	auto player1 = std::make_shared<Player>();
// 	player1->setCharacter(Character(ECharName::ZHAOYUN));
// 	auto skillPanal1 = UI_SkillPanal::create(player1);
// 	skillPanal1->setPosition(size.width / 2, size.height / 2 - 25);
// 	skillPanal1->setSkillState(ESkillName::LONGDAN, ESkillState::USING);
// 	addChild(skillPanal1);

// 	auto logBox = UI_LogBox::create();
// 	logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶ÔÂÀ²¼³ö¡¾É±¡¿"));
// 	logBox->setPosition(size.width / 2, size.height / 2);
// 	addChild(logBox);
// 	logBox->setScale(0.8f);

// 	auto debugbox = UI_DebugBox::create();
// 	debugbox->setPosition(size.width / 2, size.height / 2);
// 	addChild(debugbox);

// 	auto player = std::make_shared<Player>();
// 	player->setPosition(4);
// 	auto pos = UI_Position::create(player);
// 	pos->setPosition(size.width / 2, size.height / 2);
// 	addChild(pos);
// 	player->setPosition(5);
// 	pos->refresh();

// 	auto player = std::make_shared<Player>();
// 	auto card1 = std::make_shared<Card_DrownInHappiness>(ECardSuit::CLUB, 13);
// 	auto card2 = std::make_shared<Card_Lightning>(ECardSuit::CLUB, 13);
// 	player->getJudgeCards().push_back(card1);
// 	player->getJudgeCards().push_back(card2);
// 	auto judgeIcon = UI_JudgeIcon::create(player);
// 	judgeIcon->setPosition(size.width / 2, size.height / 2);
// 	addChild(judgeIcon);

// 	auto player = std::make_shared<Player>();
// 	player->setMaxHP(5);
// 	player->setHP(4);
// 	auto hp = UI_HP::create(player);
// 	hp->setPosition(size.width / 2, size.height / 2);
// 	addChild(hp);

	auto player = std::make_shared<Player>();
	auto id = UI_ID::create(player);
	id->setPosition(size.width / 2, size.height / 2);
	addChild(id);


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
