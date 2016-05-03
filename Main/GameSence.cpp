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

	Sprite * background = Sprite::create("png/ui/gamebackground.jpg");
	background->setScale(2.7f);
	background->setPosition(size / 2);
	addChild(background);

	GameManager::getInstance()->gameBegin();
	initPlayerPanal();
	initLogBox();

	return true;
}

void GameSence::initLogBox() {
	m_logBox = UI_LogBox::create();
	m_logBox->setAnchorPoint(Vec2::ZERO);
	m_logBox->setPosition(1135, 460);
	m_logBox->addLog(TextManager::gbkToUtf8("曹操对貂蝉使用了杀，凑字数凑字数凑字数凑字数凑字数凑字数。"));
	addChild(m_logBox);
}

void GameSence::initPlayerPanal() {
	// 添加前置玩家
	auto playerManager = GameManager::getInstance()->getPlayerManager();
	auto player = playerManager.getForwardPlayer();
	auto forwardPlayerPanal = UI_ForwardPlayerPanal::create(player);
	forwardPlayerPanal->setPosition(Vec2::ZERO);
	addChild(forwardPlayerPanal);

	auto & cards = player->getHandCardPile().getCards();
	for (auto & card : cards) {
		auto ui_card = forwardPlayerPanal->getHandCardPanal()->addCard(card);
		ui_card->setCanUp(true);
	}

	// 添加其他玩家
	UI_PlayerPanal * otherPlayerPanal[7];
	for (size_t i = 0; i < 7; i++) {
		player = playerManager.getNextPlayer(player);
		otherPlayerPanal[i] = UI_PlayerPanal::create(player);
		if (player->isLordPlayer()) {
			otherPlayerPanal[i]->getID()->setMarkID(ECharID::LORD);
		}
		addChild(otherPlayerPanal[i]);
	}
	otherPlayerPanal[0]->setPosition(828, 230);
	otherPlayerPanal[1]->setPosition(828, 450);
	otherPlayerPanal[2]->setPosition(628, 510);
	otherPlayerPanal[3]->setPosition(418, 510);
	otherPlayerPanal[4]->setPosition(208, 510);
	otherPlayerPanal[5]->setPosition(10, 450);
	otherPlayerPanal[6]->setPosition(10, 230);
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
