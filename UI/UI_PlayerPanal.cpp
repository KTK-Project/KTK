#include "platform/CCPlatformConfig.h"
#include "UI_PlayerPanal.h"
#include "Manager\GameManager.h"

using namespace cocos2d;

bool UI_PlayerPanal::initWithPlayer(const std::shared_ptr<Player> & player) {
	if (!Node::init())
		return false;

	m_player = player;
	auto & textManager = GameManager::getInstance()->getTextManger();

	m_background = LayerColor::create(Color4B::RED);
	m_background->setContentSize(Size(162, 200));
	addChild(m_background);

	std::string path = "png/character/";
	path += textManager.getStringOfCharName(player->getCharacter().getName());
	path += ".png";
	m_portrait = Sprite::create(path);
	m_portrait->setAnchorPoint(Vec2::ZERO);
	addChild(m_portrait);

	auto nameStr = textManager.getTextOfCharName(player->getCharacter().getName());
	m_name = Label::create(nameStr, "ziti.otf", 30);
	m_name->setColor(Color3B::BLACK);
	m_name->setAnchorPoint(Vec2::ANCHOR_MIDDLE);

#if CC_TARGET_PLATFORM == CC_PLATFORM_WIN32
	switch (m_name->getStringLength()) {
		case 2: m_name->setScale(0.65f); break;
		case 3: m_name->setScaleX(0.51f); m_name->setScaleY(0.58f); break;
		default: throw "Can't find match!"; break;
	}
#endif

#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
	switch (nameStr.length()) {
		case 4: m_name->setScale(0.65f); break;
		case 6: m_name->setScaleX(0.51f); m_name->setScaleY(0.58f); break;
		default: throw "Can't find match!"; break;
	}
#endif

	m_name->setPosition(25, 182);
	addChild(m_name);

	auto forceSize = Size(30, 30);
	m_force = LayerColor::create(Color4B::BLACK);
	m_force->setContentSize(forceSize);
	m_force->setAnchorPoint(Vec2::ZERO);
	m_force->setPosition(50, 172);
	m_force->setScale(0.8f);
	addChild(m_force);
	auto forceLabel = Label::create(textManager.getTextOfForce(player->getCharacter().getForce()), "ziti.otf", 30);
	forceLabel->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	forceLabel->setPosition(Size(forceSize.width / 2, forceSize.height / 2 - 2));
	forceLabel->setScale(0.7f);
	m_force->addChild(forceLabel);

	m_ID = UI_ID::create(player);
	m_ID->setScale(0.6f);
	m_ID->setAnchorPoint(Vec2::ZERO);
	m_ID->setPosition(106, 172);
	addChild(m_ID);

	m_HP = UI_HP::create(player);
	m_HP->setPosition(139, 7);
	m_HP->setScale(0.8f);
	addChild(m_HP);

	m_position = UI_Position::create(player);
	m_position->setScale(0.6f);
	m_position->setAnchorPoint(Vec2::ZERO);
	m_position->setPosition(134, 172);
	addChild(m_position);

	m_handCardQuantity = UI_HandCardQuantity::create(player);
	m_handCardQuantity->setScale(0.6f);
	m_handCardQuantity->setAnchorPoint(Vec2::ZERO);
	m_handCardQuantity->setPosition(78, 172);
	addChild(m_handCardQuantity);

	m_equipmentPanal = UI_EquipmentPanal::create(player);
	m_equipmentPanal->setScale(0.9f);
	m_equipmentPanal->setAnchorPoint(Vec2::ZERO);
	m_equipmentPanal->setPosition(0, 4);
	addChild(m_equipmentPanal);

	m_judgeIcon = UI_JudgeIcon::create(player);
	m_judgeIcon->setScale(0.45f);
	m_judgeIcon->setAnchorPoint(Vec2::ZERO);
	m_judgeIcon->setPosition(137, 143);
	addChild(m_judgeIcon);

	switch (player->getCharacter().getForce()) {
		case ECharForce::WEI:
			m_background->setColor(Color3B::BLUE);
			forceLabel->setColor(Color3B::BLUE);
			break;
		case ECharForce::SHU:
			m_background->setColor(Color3B::ORANGE);
			forceLabel->setColor(Color3B::ORANGE);
			break;
		case ECharForce::WU:
			m_background->setColor(Color3B::GREEN);
			forceLabel->setColor(Color3B::GREEN);
			break;
		case ECharForce::QUN:
			m_background->setColor(Color3B::GRAY);
			forceLabel->setColor(Color3B::GRAY);
			break;
		default: throw "Can't find match!"; break;
	}

	return true;
}

std::shared_ptr<Player> UI_PlayerPanal::getPlayer() const {
	return m_player.lock();
}

UI_ID * UI_PlayerPanal::getID() const {
	return m_ID;
}

UI_HP * UI_PlayerPanal::getHP() const {
	return m_HP;
}

UI_Position * UI_PlayerPanal::getPositionUI() const {
	return m_position;
}

UI_HandCardQuantity * UI_PlayerPanal::getHandCardQuantity() const {
	return m_handCardQuantity;
}

UI_EquipmentPanal * UI_PlayerPanal::getEquipmentPanal() const {
	return m_equipmentPanal;
}

UI_JudgeIcon * UI_PlayerPanal::getJudgeIcon() const {
	return m_judgeIcon;
}

//	Todo:stm delete or not?
// UI_InformationBox * UI_PlayerPanal::getInformationBox() const {
// 	return m_informationBox;
// }

//	Todo:stm delete or not?
// UI_LogBox * UI_PlayerPanal::getLogBox() const {
// 	return m_logBox;
// }

void UI_PlayerPanal::drawCards(const std::vector<std::shared_ptr<Card>> & cards) const {
	//直接获取cards.size()，
	//再为这几个卡牌封装为反面的卡牌并给予一个移动，隐去，removechild的动作
	// TODO - implement UI_PlayerPanal::drawCards
	throw "Not yet implemented";
}

EPlayerColor UI_PlayerPanal::getPlayerColor() const {
	return m_playerColor;
}

void UI_PlayerPanal::setPlayerColor(EPlayerColor playerColor) {
	//设置面板颜色
	throw "Not yet implemented";
}

EPlayerPanalState UI_PlayerPanal::getPlayerPanalState() const {
	return m_playerPanalState;
}

void UI_PlayerPanal::setPlayerPanalState(EPlayerPanalState playerPanalState) {
	//设置背景,如果为可选择的，设置事件：触发则塞入selectedPlayer中
	throw "Not yet implemented";
}

void UI_PlayerPanal::update(float delta) {
	throw "Not yet implemented";
}

//	Todo:stm delete or not?
// void UI_PlayerPanal::clean() const {
// 	// TODO - implement UI_PlayerPanal::clean
// 	throw "Not yet implemented";
// }
