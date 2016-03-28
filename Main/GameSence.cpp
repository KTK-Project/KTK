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
#include "UI/UI_ForwardPlayerPanal.h"
#include "Card/Card.h"
#include "Card/Card_IceSword.h"
#include "Card/Card_JusticeShield.h"
#include "Card/Card_ZhuGeCrossBow.h"
#include "UI/UI_LogBox.h"

using namespace cocos2d;

bool GameSence::init() {
	auto size = Director::getInstance()->getVisibleSize();
	auto l = LayerColor::create(Color4B::WHITE);
	addChild(l, -10);

// 	auto lineX = LayerColor::create(Color4B::RED);
// 	lineX->setContentSize(Size(size.width, 3));
// 	lineX->setPosition(0, size.height / 2);
// 	addChild(lineX, 100);
// 
// 	auto lineY = LayerColor::create(Color4B::RED);
// 	lineY->setContentSize(Size(3, size.height));
// 	lineY->setPosition(size.width / 2, 0);
// 	addChild(lineY, 100);

// 	auto card_ptr = std::make_shared<Card_Lightning>(ECardSuit::CLUB, 12);
// 	auto ui_card1 = UI_Card::create(card_ptr);
// 	ui_card1->setScale(0.6f);
// 	ui_card1->setPosition(size.width / 2, size.height / 2);
// 	addChild(ui_card1.get());
// 	ui_card1->setCanUp(true);
// 
// 	auto ui_card2 = UI_Card::create(card_ptr);
// 	ui_card2->setScale(0.6f);
// 	ui_card2->setPosition(size.width / 2, size.height / 2);
// 	addChild(ui_card2.get());
// 	ui_card2->setCanUp(true);

//	auto player = std::make_shared<Player>();
//	player->setCharacter(Character(ECharName::DAQIAO));
//	auto skillPanal = UI_SkillPanal::create(player);
//	skillPanal->setPosition(size.width / 2, size.height / 2);
//	player->getCharacter().getSkillList().getSkillByIndex(0).setSkillState(ESkillState::CANUSE);
//	skillPanal->refresh();
//	addChild(skillPanal);
//
//	auto player1 = std::make_shared<Player>();
//	player1->setCharacter(Character(ECharName::ZHAOYUN));
//	auto skillPanal1 = UI_SkillPanal::create(player1);
//	skillPanal1->setPosition(size.width / 2, size.height / 2 - 25);
//	skillPanal1->setSkillState(ESkillName::LONGDAN, ESkillState::USING);
//	addChild(skillPanal1);

//	auto logBox = UI_LogBox::create();
//	logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶ÔÂÀ²¼³ö¡¾É±¡¿"));
//	logBox->setPosition(size.width / 2, size.height / 2);
//	addChild(logBox);
//	logBox->setScale(0.8f);

//	auto debugbox = UI_DebugBox::create();
//	debugbox->setPosition(size.width / 2, size.height / 2);
//	addChild(debugbox);

//	auto player = std::make_shared<Player>();
//	player->setPosition(4);
//	auto pos = UI_Position::create(player);
//	pos->setPosition(size.width / 2, size.height / 2);
//	addChild(pos);
//	player->setPosition(5);
//	pos->refresh();

//	auto player = std::make_shared<Player>();
//	auto card1 = std::make_shared<Card_DrownInHappiness>(ECardSuit::CLUB, 13);
//	auto card2 = std::make_shared<Card_Lightning>(ECardSuit::CLUB, 13);
//	player->getJudgeCards().push_back(card1);
//	player->getJudgeCards().push_back(card2);
//	auto judgeIcon = UI_JudgeIcon::create(player);
//	judgeIcon->setPosition(size.width / 2, size.height / 2);
//	addChild(judgeIcon);

//	auto player = std::make_shared<Player>();
//	player->setMaxHP(5);
//	player->setHP(4);
//	auto hp = UI_HP::create(player);
//	hp->setPosition(size.width / 2, size.height / 2);
//	addChild(hp);

//	auto player = std::make_shared<Player>();
//	auto id = UI_ID::create(player);
//	id->setPosition(size.width / 2, size.height / 2);
//	addChild(id);

//	auto message = UI_Message::create();
//	message->setString(TextManager::gbkToUtf8("ÊÇ·ñ·¢¶¯»¤¼Ý£¿"));
//	message->setPosition(size.width / 2, size.height / 2);
//	message->setVisible(false);
//	addChild(message);

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
// 	for (int i = 0; i < v.size(); i++) {
// 		v[i]->setCanUp(true);
// 	}
// 	addChild(page);

// 	auto handCardPanal = UI_HandCardPanal::create();
// 	handCardPanal->setScale(1.3f);
// 	handCardPanal->setPosition(100, size.height / 2);
// 	const int length = 7;
// 	std::array<std::shared_ptr<Card_Slash>, length> card_ptr;
// 	for (int i = 0; i < length; i++) {
// 		card_ptr[i] = std::make_shared<Card_Slash>(ECardSuit::DIAMOND, i + 1);
// 		auto ui = handCardPanal->addCard(card_ptr[i]);
// 		ui->setCanUp(true);
// 	}
// 	addChild(handCardPanal);
// 	auto action1 = DelayTime::create(3.0f);
// 	auto action2 = CallFunc::create([=]() {
// 		handCardPanal->removeCard(card_ptr[3]);
// 		handCardPanal->removeCard(card_ptr[5]);
// 	});
// 	handCardPanal->runAction(Sequence::create(action1, action2, nullptr));

// 	auto player = std::make_shared<Player>();
// 	GameManager::getInstance()->getPlayerManager().getPlayers()[0] = player;
// 	player->setCharacter(Character(ECharName::DIAOCHAN));
// 	player->setHP(3);
// 	player->setID(ECharID::LORD);
// 	player->setPosition(4);
// 	player->setMaxHP(5);
// 	auto card1 = std::make_shared<Card_DragonBroadSword>(ECardSuit::DIAMOND, 1);
// 	auto card2 = std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 11);
// 	auto card3 = std::make_shared<Card_Horse>(ECardName::DILU, ECardSuit::HEART, 12);
// 	auto card4 = std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::SPADE, 13);
// 	player->setWeapon(card1);
// 	player->setArmor(card2);
// 	player->setOffensiveHorse(card4);
// 	player->setDefensiveHorse(card3);
// 	auto card5 = std::make_shared<Card_Lightning>(ECardSuit::DIAMOND, 4);
// 	auto card6 = std::make_shared<Card_DrownInHappiness>(ECardSuit::DIAMOND, 4);
// 	player->getJudgeCards().push_back(card5);
// 	player->getJudgeCards().push_back(card6);
// 	auto playerPanal = UI_PlayerPanal::create(player);
// 	playerPanal->setPosition(size.width / 2, size.height / 2);
// 	addChild(playerPanal);

//	auto player = std::make_shared<Player>();
//	GameManager::getInstance()->getPlayerManager().getPlayers()[0] = player;
//	GameManager::getInstance()->getPlayerManager().setForwardPlayer(player);
//	player->setCharacter(Character(ECharName::DIAOCHAN));
//	player->setHP(3);
//	player->setID(ECharID::LORD);
//	player->setPosition(4);
//	player->setMaxHP(5);
//	auto card1 = std::make_shared<Card_DragonBroadSword>(ECardSuit::DIAMOND, 1);
//	auto card2 = std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 11);
//	auto card3 = std::make_shared<Card_Horse>(ECardName::DILU, ECardSuit::HEART, 12);
//	auto card4 = std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::SPADE, 13);
//	player->setWeapon(card1);
//	player->setArmor(card2);
//	player->setOffensiveHorse(card4);
//	player->setDefensiveHorse(card3);
//	auto card5 = std::make_shared<Card_Lightning>(ECardSuit::DIAMOND, 4);
//	auto card6 = std::make_shared<Card_DrownInHappiness>(ECardSuit::DIAMOND, 4);
//	player->getJudgeCards().push_back(card5);
//	player->getJudgeCards().push_back(card6);
//	auto playerPanal = UI_ForwardPlayerPanal::create(player);
//	playerPanal->setPosition(Vec2::ZERO);
//	addChild(playerPanal);
//	auto cardui = playerPanal->getHandCardPanal()->addCard(card1);
//	cardui->setCanUp(true);
//	cardui = playerPanal->getHandCardPanal()->addCard(card2);
//	cardui->setCanUp(true);
//	cardui = playerPanal->getHandCardPanal()->addCard(card2);
//	cardui->setCanUp(true);
//	cardui = playerPanal->getHandCardPanal()->addCard(card2);
//	cardui->setCanUp(true);
//	cardui = playerPanal->getHandCardPanal()->addCard(card2);
//	cardui->setCanUp(true);
//	cardui = playerPanal->getHandCardPanal()->addCard(card2);
//	cardui->setCanUp(true);
//	cardui = playerPanal->getHandCardPanal()->addCard(card2);
//	cardui->setCanUp(true);
//	cardui = playerPanal->getHandCardPanal()->addCard(card2);
//	cardui->setCanUp(true);
//	cardui = playerPanal->getHandCardPanal()->addCard(card2);
//	cardui->setCanUp(true);

	Sprite * background = Sprite::create("png/ui/gamebackground.jpg");
	background->setScale(2.7f);
	background->setPosition(size / 2);
	addChild(background);

	initPlayerPanal();
	initLogBox();

	return true;
}

void GameSence::initLogBox() {
	m_logBox = UI_LogBox::create();
	m_logBox->setAnchorPoint(Vec2::ZERO);
	m_logBox->setPosition(1135, 460);
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	m_logBox->addLog(TextManager::gbkToUtf8("²Ü²Ù¶Ôõõ²õÊ¹ÓÃÁËÉ±£¬´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý´Õ×ÖÊý¡£"));
	addChild(m_logBox);
}

void GameSence::initPlayerPanal() {
	//Ìí¼ÓÖ÷Íæ¼Ò
	auto player = std::make_shared<Player>();
	GameManager::getInstance()->getPlayerManager().getPlayers()[0] = player;
	GameManager::getInstance()->getPlayerManager().setForwardPlayer(player);
	player->setCharacter(Character(ECharName::CAOCAO));
	player->setHP(4);
	player->setID(ECharID::LORD);
	player->setPosition(1);
	player->setMaxHP(5);
	std::shared_ptr<Card_Weapon> card1 = std::make_shared<Card_ZhuGeCrossBow>(ECardSuit::DIAMOND, 1);
	std::shared_ptr<Card_Armor> card2 = std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 11);
	std::shared_ptr<Card_Horse> card3 = std::make_shared<Card_Horse>(ECardName::DILU, ECardSuit::HEART, 12);
	std::shared_ptr<Card_Horse> card4 = std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::SPADE, 13);
	player->setWeapon(card1);
	player->setArmor(card2);
	player->setOffensiveHorse(card4);
	player->setDefensiveHorse(card3);
	auto card5 = std::make_shared<Card_Lightning>(ECardSuit::DIAMOND, 4);
	auto card6 = std::make_shared<Card_DrownInHappiness>(ECardSuit::DIAMOND, 4);
	player->getJudgeCards().push_back(card5);
	player->getJudgeCards().push_back(card6);
	auto forwardPlayerPanal = UI_ForwardPlayerPanal::create(player);
	forwardPlayerPanal->setPosition(Vec2::ZERO);
	addChild(forwardPlayerPanal);
	
	player->getHandCardPile().pushBack(card1);
	auto cardui = forwardPlayerPanal->getHandCardPanal()->addCard(card1);
	cardui->setCanUp(true);

	for (size_t i = 0; i < 10; i++) {
		player->getHandCardPile().pushBack(card2);
		cardui = forwardPlayerPanal->getHandCardPanal()->addCard(card2);
		cardui->setCanUp(true);
	}
	forwardPlayerPanal->getHandCardQuantity()->refresh();

	//ÆäËû7¸öÍæ¼Ò
	player = std::make_shared<Player>();
	GameManager::getInstance()->getPlayerManager().getPlayers()[1] = player;
	player->setCharacter(Character(ECharName::SUNSHANGXIANG));
	player->setHP(3);
	player->setID(ECharID::NONE);
	player->setPosition(2);
	player->setMaxHP(5);
	card1 = std::make_shared<Card_DragonBroadSword>(ECardSuit::DIAMOND, 1);
	card2 = std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 11);
	card3 = std::make_shared<Card_Horse>(ECardName::DILU, ECardSuit::HEART, 12);
	card4 = std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::SPADE, 13);
	player->setWeapon(card1);
	player->setArmor(card2);
	player->setOffensiveHorse(card4);
	player->setDefensiveHorse(card3);
	card5 = std::make_shared<Card_Lightning>(ECardSuit::DIAMOND, 4);
	card6 = std::make_shared<Card_DrownInHappiness>(ECardSuit::DIAMOND, 4);
	player->getJudgeCards().push_back(card5);
	player->getJudgeCards().push_back(card6);
	auto playerPanal = UI_PlayerPanal::create(player);
	playerPanal->setPosition(828, 230);
	addChild(playerPanal);

	player = std::make_shared<Player>();
	GameManager::getInstance()->getPlayerManager().getPlayers()[2] = player;
	player->setCharacter(Character(ECharName::ZHENJI));
	player->setHP(3);
	player->setID(ECharID::MINISTER);
	player->setPosition(3);
	player->setMaxHP(5);
	card1 = std::make_shared<Card_DragonBroadSword>(ECardSuit::DIAMOND, 1);
	card2 = std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 11);
	card3 = std::make_shared<Card_Horse>(ECardName::DILU, ECardSuit::HEART, 12);
	card4 = std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::SPADE, 13);
	player->setWeapon(card1);
	player->setArmor(card2);
	player->setOffensiveHorse(card4);
	player->setDefensiveHorse(card3);
	playerPanal = UI_PlayerPanal::create(player);
	playerPanal->setPosition(828, 450);
	addChild(playerPanal);

	player = std::make_shared<Player>();
	GameManager::getInstance()->getPlayerManager().getPlayers()[3] = player;
	player->setCharacter(Character(ECharName::SIMAYI));
	player->setHP(1);
	player->setID(ECharID::NONE);
	player->setPosition(4);
	player->setMaxHP(5);
	card1 = std::make_shared<Card_DragonBroadSword>(ECardSuit::DIAMOND, 1);
	card2 = std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 11);
	card3 = std::make_shared<Card_Horse>(ECardName::DILU, ECardSuit::HEART, 12);
	card4 = std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::SPADE, 13);
	player->setWeapon(card1);
	player->setArmor(card2);
	player->setOffensiveHorse(card4);
	player->setDefensiveHorse(card3);
	card5 = std::make_shared<Card_Lightning>(ECardSuit::DIAMOND, 4);
	card6 = std::make_shared<Card_DrownInHappiness>(ECardSuit::DIAMOND, 4);
	player->getJudgeCards().push_back(card5);
	player->getJudgeCards().push_back(card6);
	playerPanal = UI_PlayerPanal::create(player);
	playerPanal->setPosition(628, 510);
	addChild(playerPanal);

	player = std::make_shared<Player>();
	GameManager::getInstance()->getPlayerManager().getPlayers()[4] = player;
	player->setCharacter(Character(ECharName::ZHOUYU));
	player->setHP(1);
	player->setID(ECharID::NONE);
	player->setPosition(5);
	player->setMaxHP(4);
	card1 = std::make_shared<Card_DragonBroadSword>(ECardSuit::DIAMOND, 1);
	card2 = std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 11);
	card3 = std::make_shared<Card_Horse>(ECardName::DILU, ECardSuit::HEART, 12);
	card4 = std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::SPADE, 13);
	player->setWeapon(card1);
	player->setArmor(card2);
	player->setOffensiveHorse(card4);
	player->setDefensiveHorse(card3);
	card5 = std::make_shared<Card_Lightning>(ECardSuit::DIAMOND, 4);
	card6 = std::make_shared<Card_DrownInHappiness>(ECardSuit::DIAMOND, 4);
	player->getJudgeCards().push_back(card5);
	player->getJudgeCards().push_back(card6);
	playerPanal = UI_PlayerPanal::create(player);
	playerPanal->setPosition(418, 510);
	addChild(playerPanal);

	player = std::make_shared<Player>();
	GameManager::getInstance()->getPlayerManager().getPlayers()[5] = player;
	player->setCharacter(Character(ECharName::ZHAOYUN));
	player->setHP(2);
	player->setID(ECharID::NONE);
	player->setPosition(6);
	player->setMaxHP(3);
	card1 = std::make_shared<Card_DragonBroadSword>(ECardSuit::DIAMOND, 1);
	card2 = std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 11);
	card3 = std::make_shared<Card_Horse>(ECardName::DILU, ECardSuit::HEART, 12);
	card4 = std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::SPADE, 13);
	player->setWeapon(card1);
	player->setArmor(card2);
	player->setOffensiveHorse(card4);
	player->setDefensiveHorse(card3);
	card5 = std::make_shared<Card_Lightning>(ECardSuit::DIAMOND, 4);
	card6 = std::make_shared<Card_DrownInHappiness>(ECardSuit::DIAMOND, 4);
	player->getJudgeCards().push_back(card5);
	player->getJudgeCards().push_back(card6);
	playerPanal = UI_PlayerPanal::create(player);
	playerPanal->setPosition(208, 510);
	addChild(playerPanal);

	player = std::make_shared<Player>();
	GameManager::getInstance()->getPlayerManager().getPlayers()[6] = player;
	player->setCharacter(Character(ECharName::HUANGYUEYING));
	player->setHP(3);
	player->setID(ECharID::INSURGENT);
	player->setPosition(7);
	player->setMaxHP(5);
	card1 = std::make_shared<Card_ZhuGeCrossBow>(ECardSuit::DIAMOND, 1);
	card2 = std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 11);
	card3 = std::make_shared<Card_Horse>(ECardName::DILU, ECardSuit::HEART, 12);
	card4 = std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::SPADE, 13);
	player->setWeapon(card1);
	player->setArmor(card2);
	player->setOffensiveHorse(card4);
	player->setDefensiveHorse(card3);
	card5 = std::make_shared<Card_Lightning>(ECardSuit::DIAMOND, 4);
	player->getJudgeCards().push_back(card5);
	playerPanal = UI_PlayerPanal::create(player);
	playerPanal->setPosition(10, 450);
	addChild(playerPanal);

	player = std::make_shared<Player>();
	GameManager::getInstance()->getPlayerManager().getPlayers()[7] = player;
	player->setCharacter(Character(ECharName::DIAOCHAN));
	player->setHP(5);
	player->setID(ECharID::SPY);
	player->setPosition(8);
	player->setMaxHP(5);
	card1 = std::make_shared<Card_IceSword>(ECardSuit::DIAMOND, 1);
	card2 = std::make_shared<Card_JusticeShield>(ECardSuit::CLUB, 11);
	card3 = std::make_shared<Card_Horse>(ECardName::JUEYING, ECardSuit::HEART, 12);
	card4 = std::make_shared<Card_Horse>(ECardName::CHITU, ECardSuit::SPADE, 13);
	player->setWeapon(card1);
	player->setArmor(card2);
	player->setOffensiveHorse(card4);
	player->setDefensiveHorse(card3);
	card6 = std::make_shared<Card_DrownInHappiness>(ECardSuit::DIAMOND, 4);
	player->getJudgeCards().push_back(card6);
	playerPanal = UI_PlayerPanal::create(player);
	playerPanal->setPosition(10, 230);
	addChild(playerPanal);
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
