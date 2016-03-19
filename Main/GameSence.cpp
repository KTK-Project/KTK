#include <memory>
#include "cocos2d.h"
#include "GameSence.h"

#include "Manager/TextManager.h"
#include "Card/Card_Slash.h"
#include "UI/UI_SkillPanal.h"
#include "UI/UI_DebugBox.h"
#include "Card/Card_DrownInHappiness.h"
#include "Card/Card_Lightning.h"
#include "Manager/GameManager.h"
#include "UI/UI_Message.h"
#include "UI/UI_EquipmentPanal.h"
#include "Card/Card_Horse.h"
#include "Card/Card_DragonBroadSword.h"
#include "Card/Card_BaGuaRank.h"
#include "UI/UI_HandCardPage.h"
#include "UI/UI_HandCardPanal.h"
#include <array>

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
// 	auto ui_card1 = UI_Card::create(card_ptr);
// 	ui_card1->setScale(0.6);
// 	ui_card1->setPosition(size.width / 2, size.height / 2);
// 	addChild(ui_card1.get());
// 	ui_card1->setCanUp(true);
// 
// 	auto ui_card2 = UI_Card::create(card_ptr);
// 	ui_card2->setScale(0.6);
// 	ui_card2->setPosition(size.width / 2, size.height / 2);
// 	addChild(ui_card2.get());
// 	ui_card2->setCanUp(true);

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
// 	logBox->addLog(TextManager::gbkToUtf8("曹操对吕布出【杀】"));
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

// 	auto player = std::make_shared<Player>();
// 	auto id = UI_ID::create(player);
// 	id->setPosition(size.width / 2, size.height / 2);
// 	addChild(id);

// 	auto message = UI_Message::create();
// 	message->setString(TextManager::gbkToUtf8("是否发动护驾？"));
// 	message->setPosition(size.width / 2, size.height / 2);
// // 	message->setVisible(false);
// 	addChild(message);

// 	auto player = std::make_shared<Player>();
// 	player->setWeapon(std::make_shared<Card_DragonBroadSword>(ECardSuit::CLUB, 13));
// 	player->setArmor(std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 13));
// 	player->setOffensiveHorse(std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::CLUB, 13));
// 	player->setDefensiveHorse(std::make_shared<Card_Horse>(ECardName::DILU, ECardSuit::CLUB, 13));
// 	auto equipment = UI_EquipmentPanal::create(player);
// 	equipment->setPosition(size.width / 2, size.height / 2);
// 	addChild(equipment);

// 	auto player = std::make_shared<Player>();
// 	auto quantity = UI_HandCardQuantity::create(player);
// 	quantity->setPosition(size.width / 2, size.height / 2);
// 	addChild(quantity);

// 	auto page = UI_HandCardPage::create();
// 	page->setPosition(100, size.height / 2);
// 	auto card_ptr = std::make_shared<Card_Slash>(ECardSuit::DIAMOND, 13);
// 	page->addCard(card_ptr);
// 	page->addCard(card_ptr);
// 	page->addCard(card_ptr);
// 	page->addCard(card_ptr);
// 	page->addCard(card_ptr);
// 	page->addCard(card_ptr);
// 	page->addCard(card_ptr);
// 	page->settleUp(true);
// 	auto action1 = DelayTime::create(2.0f);
// 	auto action2 = CallFunc::create([=]() {
// 		auto & v = page->getCards();
// 		auto card1 = v[0];
// 		auto card2 = v[2];
// 		auto card3 = v[4];
// 
// 		page->removeCard(card1);
// 		card1->setVisible(false);
// 
// 		page->removeCard(card2);
// 		card2->setVisible(false);
// 
// 		page->removeCard(card3);
// 		card3->setVisible(false);
// 
// 		page->settleUp(true);
// 	});
// 	auto seq = Sequence::create(action1, action2, nullptr);
// 	runAction(seq);
// 	auto & v = page->getCards();
// 	for (size_t i = 0; i < v.size(); i++) {
// 		v[i]->setCanUp(true);
// 	}
// 	addChild(page);

	auto handCardPanal = UI_HandCardPanal::create();
	handCardPanal->setScale(1.3);
	handCardPanal->setPosition(100, size.height / 2);
	const size_t length = 13;
	std::array<std::shared_ptr<Card_Slash>, length> card_ptr;
	for (size_t i = 0; i < length; i++) {
		card_ptr[i] = std::make_shared<Card_Slash>(ECardSuit::DIAMOND, i + 1);
	}
	for (size_t i = 0; i < length; i++) {
		auto ui = handCardPanal->addCard(card_ptr[i]);
		ui->setCanUp(true);
	}
	addChild(handCardPanal);
	auto action1 = DelayTime::create(3.0f);
	auto action2 = CallFunc::create([=]() {
		handCardPanal->removeCard(card_ptr[3]);
		handCardPanal->removeCard(card_ptr[5]);
		handCardPanal->removeCard(card_ptr[7]);
		handCardPanal->removeCard(card_ptr[9]);
	});
	handCardPanal->runAction(Sequence::create(action1, action2, nullptr));

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
