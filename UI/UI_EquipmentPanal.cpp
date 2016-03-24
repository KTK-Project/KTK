#include "UI_EquipmentPanal.h"
#include "cocos2d.h"
#include <string>
#include "Manager\TextManager.h"
#include "Manager\GameManager.h"

using namespace cocos2d;

bool UI_EquipmentPanal::initWithPlayer(const std::shared_ptr<Player> & player) {
	if (!Node::init())
		return false;

	m_player = player;
	auto size = Size(100, 20);

	m_weapon = LayerColor::create(Color4B::BLUE);
	m_weapon->setContentSize(size);
	m_weapon->setPosition(Vec2(0, 75));
	addChild(m_weapon);

	m_armor = LayerColor::create(Color4B::BLUE);
	m_armor->setContentSize(size);
	m_armor->setPosition(Vec2(0, 50));
	addChild(m_armor);

	m_offensiveHorse = LayerColor::create(Color4B::BLUE);
	m_offensiveHorse->setContentSize(size);
	m_offensiveHorse->setPosition(Vec2(0, 25));
	addChild(m_offensiveHorse);

	m_defensiveHorse = LayerColor::create(Color4B::BLUE);
	m_defensiveHorse->setContentSize(size);
	m_defensiveHorse->setPosition(Vec2(0, 0));
	addChild(m_defensiveHorse);

	for (int i = 0; i < 4; i++)
		m_touchEvents.push_back([=]() { });

	static int touchFlag = 0;
	auto listener = EventListenerTouchOneByOne::create();
	listener->onTouchBegan = [](Touch * touch, Event * event) {
		auto target = static_cast<LayerColor *>(event->getCurrentTarget());
		auto point = target->convertToNodeSpace(touch->getLocation());
		auto size = target->getContentSize();
		auto rect = Rect(Vec2::ZERO, size);
		if (rect.containsPoint(point)) {
			touchFlag = 1;
			return true;
		}
		return false;
	};

	listener->onTouchEnded = [=](Touch * touch, Event * event) {
		auto target = static_cast<LayerColor *>(event->getCurrentTarget());
		auto point = target->convertToNodeSpace(touch->getLocation());
		auto size = target->getContentSize();
		auto rect = Rect(Vec2::ZERO, size);
		if (rect.containsPoint(point)) {
			touchFlag++;
			if (touchFlag == 2) {
				if (target == m_weapon)
					m_touchEvents[0]();
				else if (target == m_armor)
					m_touchEvents[1]();
				else if (target == m_offensiveHorse)
					m_touchEvents[2]();
				else if (target == m_defensiveHorse)
					m_touchEvents[3]();
			}
		}
		touchFlag = 0;
	};

	listener->onTouchCancelled = [=](Touch * touch, Event * event) {
		touchFlag = 0;
	};

	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, m_weapon);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener->clone(), m_armor);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener->clone(), m_offensiveHorse);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener->clone(), m_defensiveHorse);

	refresh();
	return true;
}

void UI_EquipmentPanal::setEquipmentPanalState(EEquipmentPanalType type, EEquipmentPanalState state) {
	LayerColor * boxs[4] = { m_weapon, m_armor, m_offensiveHorse, m_defensiveHorse };
	int index;
	switch (type) {
		case EEquipmentPanalType::WEAPON: index = 0; break;
		case EEquipmentPanalType::ARMOR: index = 1; break;
		case EEquipmentPanalType::OFFENSIVEHORSE: index = 2; break;
		case EEquipmentPanalType::DEFENSIVEHORSE: index = 3; break;
		default: throw "Can't find match!"; break;
	}

	switch (state) {
		case EEquipmentPanalState::SELECTED:
			boxs[index]->setColor(Color3B::YELLOW);
			break;
		case EEquipmentPanalState::CANSELECTED:
			boxs[index]->setColor(Color3B::GREEN);
			break;
		case EEquipmentPanalState::CANTSELECTED:
			boxs[index]->setColor(Color3B::BLUE);
			break;
		default: throw "Can't find match!"; break;
	}
}

void UI_EquipmentPanal::setEquipmentPanalTouchEvent(EEquipmentPanalType type, std::function<void()> callBack) {
	int index;
	switch (type) {
		case EEquipmentPanalType::WEAPON: index = 0; break;
		case EEquipmentPanalType::ARMOR: index = 1; break;
		case EEquipmentPanalType::OFFENSIVEHORSE: index = 2; break;
		case EEquipmentPanalType::DEFENSIVEHORSE: index = 3; break;
		default: throw "Can't find match!"; break;
	}

	m_touchEvents[index] = callBack;
}

void UI_EquipmentPanal::refresh() {
	LayerColor * boxs[4] = { m_weapon, m_armor, m_offensiveHorse, m_defensiveHorse };
	std::shared_ptr<Card> cards[4];
	cards[0] = m_player.lock()->getWeapon();
	cards[1] = m_player.lock()->getArmor();
	cards[2] = m_player.lock()->getOffensiveHorse();
	cards[3] = m_player.lock()->getDefensiveHorse();

	for (int i = 0; i < 4; i++) {
		if (cards[i] == nullptr) {
			boxs[i]->removeAllChildren();
			continue;
		}

		auto size = boxs[i]->getContentSize();

		std::string path("png\\suit\\");
		path += GameManager::getInstance()->getTextManger().getStringOfSuit(cards[i]->getSuit());
		path += ".png";
		auto suit = Sprite::create(path);
		auto size0 = suit->getContentSize();
		auto size1 = Size(13, 13);
		suit->setScale(size1.width / size0.width, size1.height / size0.height);
		suit->setPosition(Vec2(8, size.height / 2));
		boxs[i]->addChild(suit);

		auto number = Label::create("", "ziti.otf", 13);
		number->setString(GameManager::getInstance()->getTextManger().getTextOfNumber(cards[i]->getNumber()));
		switch (cards[i]->getColor()) {
			case ECardColor::RED: number->setColor(Color3B::RED); break;
			case ECardColor::BLACK: number->setColor(Color3B::BLACK); break;
			default: throw "Can't find match!"; break;
		}
		number->setPosition(Vec2(23, size.height / 2));
		boxs[i]->addChild(number);

		auto name = Label::create("", "ziti.otf", 13);
		name->setColor(Color3B::BLACK);
		name->setString(GameManager::getInstance()->getTextManger().getTextOfCardName(cards[i]->getName()));
		name->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
		name->setPosition(Vec2(65, size.height / 2));
		boxs[i]->addChild(name);
	}

	setEquipmentPanalState(EEquipmentPanalType::WEAPON, EEquipmentPanalState::CANTSELECTED);
	setEquipmentPanalState(EEquipmentPanalType::ARMOR, EEquipmentPanalState::CANTSELECTED);
	setEquipmentPanalState(EEquipmentPanalType::OFFENSIVEHORSE, EEquipmentPanalState::CANTSELECTED);
	setEquipmentPanalState(EEquipmentPanalType::DEFENSIVEHORSE, EEquipmentPanalState::CANTSELECTED);
}
