#include "GameManager.h"
#include "Card\Card_AllOutOfNone.h"
#include "Card\Card_Slash.h"
#include "Card\Card_Dodge.h"
#include "Card\Card_Peach.h"
#include "Card\Card_GuanShiAxe.h"
#include "Card\Card_KylinBow.h"
#include "Card\Card_ZhuGeCrossBow.h"
#include "Card\Card_TripleHalberd.h"
#include "Card\Card_BaGuaRank.h"
#include "Card\Card_JusticeShield.h"
#include "Card\Card_SnakeSpear.h"
#include "Card\Card_TsingGangSword.h"
#include "Card\Card_DragonBroadSword.h"
#include "Card\Card_CoupleSwords.h"
#include "Card\Card_IceSword.h"
#include "Card\Card_MurderWithBorrowedWeapon.h"
#include "Card\Card_ArrowRain.h"
#include "Card\Card_OathInPeachGarden.h"
#include "Card\Card_SouthInvasion.h"
#include "Card\Card_Lightning.h"
#include "Card\Card_Duel.h"
#include "Card\Card_DrownInHappiness.h"
#include "Card\Card_Harvest.h"
#include "Card\Card_FlawlessDefense.h"
#include "Card\Card_Theft.h"
#include "Card\Card_Sabotage.h"
#include "Card\Card_Horse.h"

GameManager * GameManager::getInstance() {
	static GameManager * instance = nullptr;
	if (instance == nullptr)
		instance = new GameManager;
	return instance;
}

GameManager::GameManager() {
	// 构建playermanager
	throw "Not yet implemented";
}

PlayersManager & GameManager::getPlayerManager() {
	return m_playerManager;
}

RoundManager & GameManager::getRoundManager() {
	return m_roundManager;
}

EventManagers & GameManager::getEventManager() {
	return m_eventManager;
}

CardPile & GameManager::getDarkcardPile() {
	return m_darkcardPile;
}

CardPile & GameManager::getDiscardPile() {
	return m_discardPile;
}

void GameManager::gameBegin() {
//	Todo:stm
	m_darkcardPile.clear();
	m_discardPile.clear();
	// 玩家选择角色。
	// 初始化所有的管理器。

	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 2));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 3));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 4));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 5));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 6));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 7));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 8));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 8));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 9));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 9));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 10));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 10));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 11));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::CLUB, 11));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::DIAMOND, 6));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::DIAMOND, 7));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::DIAMOND, 8));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::DIAMOND, 9));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::DIAMOND, 10));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::DIAMOND, 13));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::HEART, 10));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::HEART, 10));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::HEART, 11));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::SPADE, 7));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::SPADE, 8));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::SPADE, 8));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::SPADE, 9));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::SPADE, 9));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::SPADE, 10));
	m_darkcardPile.pushBack(std::make_shared<Card_Slash>(ECardSuit::SPADE, 10));

	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND,2));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 2));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 3));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 4));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 5));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 6));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 7));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 8));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 9));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 10));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 11));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::DIAMOND, 11));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::HEART, 2));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::HEART, 2));
	m_darkcardPile.pushBack(std::make_shared<Card_Dodge>(ECardSuit::HEART, 13));

	m_darkcardPile.pushBack(std::make_shared<Card_Peach>(ECardSuit::HEART, 3));
	m_darkcardPile.pushBack(std::make_shared<Card_Peach>(ECardSuit::HEART, 4));
	m_darkcardPile.pushBack(std::make_shared<Card_Peach>(ECardSuit::HEART, 6));
	m_darkcardPile.pushBack(std::make_shared<Card_Peach>(ECardSuit::HEART, 7));
	m_darkcardPile.pushBack(std::make_shared<Card_Peach>(ECardSuit::HEART, 8));
	m_darkcardPile.pushBack(std::make_shared<Card_Peach>(ECardSuit::HEART, 9));
	m_darkcardPile.pushBack(std::make_shared<Card_Peach>(ECardSuit::HEART, 12));
	m_darkcardPile.pushBack(std::make_shared<Card_Peach>(ECardSuit::DIAMOND, 12));

	m_darkcardPile.pushBack(std::make_shared<Card_GuanShiAxe>(ECardSuit::DIAMOND, 5));
	m_darkcardPile.pushBack(std::make_shared<Card_KylinBow>(ECardSuit::HEART, 5));
	m_darkcardPile.pushBack(std::make_shared<Card_ZhuGeCrossBow>(ECardSuit::DIAMOND, 1));
	m_darkcardPile.pushBack(std::make_shared<Card_ZhuGeCrossBow>(ECardSuit::CLUB, 1));
	m_darkcardPile.pushBack(std::make_shared<Card_TripleHalberd>(ECardSuit::DIAMOND, 12));
	m_darkcardPile.pushBack(std::make_shared<Card_BaGuaRank>(ECardSuit::CLUB, 2));
	m_darkcardPile.pushBack(std::make_shared<Card_BaGuaRank>(ECardSuit::SPADE, 2));
	m_darkcardPile.pushBack(std::make_shared<Card_JusticeShield>(ECardSuit::CLUB, 2));
	m_darkcardPile.pushBack(std::make_shared<Card_SnakeSpear>(ECardSuit::SPADE, 12));
	m_darkcardPile.pushBack(std::make_shared<Card_TsingGangSword>(ECardSuit::SPADE, 6));
	m_darkcardPile.pushBack(std::make_shared<Card_DragonBroadSword>(ECardSuit::SPADE, 5));
	m_darkcardPile.pushBack(std::make_shared<Card_IceSword>(ECardSuit::SPADE, 2));
	m_darkcardPile.pushBack(std::make_shared<Card_CoupleSwords>(ECardSuit::SPADE, 2));

	m_darkcardPile.pushBack(std::make_shared<Card_OathInPeachGarden>(ECardSuit::HEART, 1));
	m_darkcardPile.pushBack(std::make_shared<Card_ArrowRain>(ECardSuit::HEART, 1));
	m_darkcardPile.pushBack(std::make_shared<Card_MurderWithBorrowedWeapon>(ECardSuit::CLUB, 12));
	m_darkcardPile.pushBack(std::make_shared<Card_MurderWithBorrowedWeapon>(ECardSuit::CLUB, 13));
	m_darkcardPile.pushBack(std::make_shared<Card_SouthInvasion>(ECardSuit::SPADE, 7));
	m_darkcardPile.pushBack(std::make_shared<Card_SouthInvasion>(ECardSuit::SPADE, 13));
	m_darkcardPile.pushBack(std::make_shared<Card_SouthInvasion>(ECardSuit::CLUB, 7));
	m_darkcardPile.pushBack(std::make_shared<Card_Lightning>(ECardSuit::HEART, 12));
	m_darkcardPile.pushBack(std::make_shared<Card_Lightning>(ECardSuit::SPADE, 1));
	m_darkcardPile.pushBack(std::make_shared<Card_Duel>(ECardSuit::SPADE, 1));
	m_darkcardPile.pushBack(std::make_shared<Card_Duel>(ECardSuit::CLUB, 1));
	m_darkcardPile.pushBack(std::make_shared<Card_Duel>(ECardSuit::DIAMOND, 1));
	m_darkcardPile.pushBack(std::make_shared<Card_DrownInHappiness>(ECardSuit::SPADE, 6));
	m_darkcardPile.pushBack(std::make_shared<Card_DrownInHappiness>(ECardSuit::CLUB, 6));
	m_darkcardPile.pushBack(std::make_shared<Card_DrownInHappiness>(ECardSuit::HEART, 6));
	m_darkcardPile.pushBack(std::make_shared<Card_Harvest>(ECardSuit::HEART, 3));
	m_darkcardPile.pushBack(std::make_shared<Card_Harvest>(ECardSuit::HEART, 4));
	m_darkcardPile.pushBack(std::make_shared<Card_AllOutOfNone>(ECardSuit::HEART, 7));
	m_darkcardPile.pushBack(std::make_shared<Card_AllOutOfNone>(ECardSuit::HEART, 8));
	m_darkcardPile.pushBack(std::make_shared<Card_AllOutOfNone>(ECardSuit::HEART, 9));
	m_darkcardPile.pushBack(std::make_shared<Card_AllOutOfNone>(ECardSuit::HEART, 11));
	m_darkcardPile.pushBack(std::make_shared<Card_FlawlessDefense>(ECardSuit::SPADE, 11));
	m_darkcardPile.pushBack(std::make_shared<Card_FlawlessDefense>(ECardSuit::CLUB, 12));
	m_darkcardPile.pushBack(std::make_shared<Card_FlawlessDefense>(ECardSuit::CLUB, 13));
	m_darkcardPile.pushBack(std::make_shared<Card_FlawlessDefense>(ECardSuit::DIAMOND, 12));
	m_darkcardPile.pushBack(std::make_shared<Card_Theft>(ECardSuit::SPADE, 3));
	m_darkcardPile.pushBack(std::make_shared<Card_Theft>(ECardSuit::SPADE, 4));
	m_darkcardPile.pushBack(std::make_shared<Card_Theft>(ECardSuit::SPADE, 11));
	m_darkcardPile.pushBack(std::make_shared<Card_Theft>(ECardSuit::DIAMOND, 3));
	m_darkcardPile.pushBack(std::make_shared<Card_Theft>(ECardSuit::DIAMOND, 4));
	m_darkcardPile.pushBack(std::make_shared<Card_Sabotage>(ECardSuit::HEART, 12));
	m_darkcardPile.pushBack(std::make_shared<Card_Sabotage>(ECardSuit::SPADE, 3));
	m_darkcardPile.pushBack(std::make_shared<Card_Sabotage>(ECardSuit::SPADE, 4));
	m_darkcardPile.pushBack(std::make_shared<Card_Sabotage>(ECardSuit::SPADE, 12));
	m_darkcardPile.pushBack(std::make_shared<Card_Sabotage>(ECardSuit::CLUB, 3));
	m_darkcardPile.pushBack(std::make_shared<Card_Sabotage>(ECardSuit::CLUB, 4));

	m_darkcardPile.pushBack(std::make_shared<Card_Horse>(ECardName::ZHUAHUANGFEIDIAN,ECardSuit::HEART, 13));
	m_darkcardPile.pushBack(std::make_shared<Card_Horse>(ECardName::DILU,ECardSuit::CLUB, 5));
	m_darkcardPile.pushBack(std::make_shared<Card_Horse>(ECardName::JUEYING,ECardSuit::SPADE, 5));
	m_darkcardPile.pushBack(std::make_shared<Card_Horse>(ECardName::DAWAN,ECardSuit::SPADE, 13));
	m_darkcardPile.pushBack(std::make_shared<Card_Horse>(ECardName::ZIXING,ECardSuit::DIAMOND, 13));
	m_darkcardPile.pushBack(std::make_shared<Card_Horse>(ECardName::CHITU,ECardSuit::HEART, 5));

	throw "Not yet implemented";
}

void GameManager::gameEnd() const {
	// TODO - implement GameManager::gameEnd
	throw "Not yet implemented";
}
