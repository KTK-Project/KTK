#include "UI_ForwardPlayerPanal.h"

using namespace cocos2d;

bool UI_ForwardPlayerPanal::initWithPlayer(const std::shared_ptr<Player> & player) {
	if (!Node::init())
		return false;

	UI_PlayerPanal::initWithPlayer(player);

	auto winSize = Director::getInstance()->getVisibleSize();
	auto backgroundSize = m_background->getContentSize();

	auto pos = Vec2(winSize.width - backgroundSize.width, 0);
	m_background->setPosition(m_background->getPosition() + pos);
	m_portrait->setPosition(m_portrait->getPosition() + pos);
	m_name->setPosition(m_name->getPosition() + pos);
	m_force->setPosition(m_force->getPosition() + pos);
	m_handCardQuantity->setPosition(m_handCardQuantity->getPosition() + pos);
	m_ID->setPosition(m_ID->getPosition() + pos);
	m_position->setPosition(m_position->getPosition() + pos);
	m_judgeIcon->setPosition(m_judgeIcon->getPosition() + pos);
	m_HP->setPosition(m_HP->getPosition() + pos);

	m_equipmentPanal->setPosition(15, 15);
	m_equipmentPanal->setScale(1.8f);

	auto equipmentPanalBackground = LayerColor::create(Color4B::ORANGE);
	equipmentPanalBackground->setContentSize(Size(210, backgroundSize.height));
	equipmentPanalBackground->setPosition(Vec2::ZERO);
	addChild(equipmentPanalBackground, -1);

	m_handCardPanal = UI_HandCardPanal::create();
	auto size0 = m_handCardPanal->getContentSize();
	auto size1 = Size(winSize.width - backgroundSize.width - 210, backgroundSize.height);
	m_handCardPanal->setPosition(210, 0);
	m_handCardPanal->setScale(size1.width / size0.width, size1.height / size0.height);
	addChild(m_handCardPanal);

	m_skillPanal = UI_SkillPanal::create(player);
	m_skillPanal->setAnchorPoint(Vec2::ZERO);
	m_skillPanal->setPosition(1124, 7);
	m_skillPanal->setScale(1.2f);
	addChild(m_skillPanal);

	return true;
}

UI_SkillPanal * UI_ForwardPlayerPanal::getSkillPanal() const {
	return m_skillPanal;
}

UI_HandCardPanal * UI_ForwardPlayerPanal::getHandCardPanal() const {
	return m_handCardPanal;
}

UI_Message * UI_ForwardPlayerPanal::getMessage() const {
	return m_message;
}

void UI_ForwardPlayerPanal::setPlayerPanalState(EPlayerPanalState playerPanalState) {
	//…Ë÷√±≥æ∞
	// TODO - implement UI_ForwardPlayerPanal::setPlayerPanalState
	throw "Not yet implemented";
}

//	Todo:stm delete or not?
// void UI_ForwardPlayerPanal::clean() const {
// 	// TODO - implement UI_ForwardPlayerPanal::clean
// 	throw "Not yet implemented";
// }
