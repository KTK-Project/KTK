#include "UI_ID.h"
#include "cocos2d.h"
#include "Manager\TextManager.h"

using namespace cocos2d;

bool UI_ID::initWithPlayer(const std::shared_ptr<Player> & player) {
	if (!Node::init())
		return false;

	m_player = player;

	auto size = Size(20, 20);
	m_markID = LayerColor::create(Color4B::BLACK);
	m_markID->setContentSize(size);
	m_markID->setPosition(Vec2::ZERO);
	addChild(m_markID);

	auto markIDLabel = Label::create(TextManager::gbkToUtf8("？"), "ziti.otf", 15);
	markIDLabel->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	markIDLabel->setPosition(size.width / 2, size.height / 2);
	markIDLabel->setTag(0);
	m_markID->addChild(markIDLabel);

	auto mark1 = LayerColor::create(Color4B::BLACK);
	mark1->setContentSize(size);
	auto markLabel1 = Label::create(TextManager::gbkToUtf8("？"), "ziti.otf", 15);
	markLabel1->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	markLabel1->setPosition(size.width / 2, size.height / 2);
	mark1->addChild(markLabel1);

	auto mark2 = LayerColor::create(Color4B::BLACK);
	mark2->setContentSize(size);
	auto markLabel2 = Label::create(TextManager::gbkToUtf8("忠"), "ziti.otf", 15);
	markLabel2->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	markLabel2->setPosition(size.width / 2, size.height / 2);
	mark2->addChild(markLabel2);

	auto mark3 = LayerColor::create(Color4B::BLACK);
	mark3->setContentSize(size);
	auto markLabel3 = Label::create(TextManager::gbkToUtf8("内"), "ziti.otf", 15);
	markLabel3->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	markLabel3->setPosition(size.width / 2, size.height / 2);
	mark3->addChild(markLabel3);

	auto mark4 = LayerColor::create(Color4B::BLACK);
	mark4->setContentSize(size);
	auto markLabel4 = Label::create(TextManager::gbkToUtf8("反"), "ziti.otf", 15);
	markLabel4->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	markLabel4->setPosition(size.width / 2, size.height / 2);
	mark4->addChild(markLabel4);

	mark1->setPosition(Vec2(0, 0));
	mark2->setPosition(Vec2(0, -30));
	mark3->setPosition(Vec2(0, -60));
	mark4->setPosition(Vec2(0, -90));

	m_IDList = Node::create();
	m_IDList->setPosition(Vec2(0, -30));
	m_IDList->addChild(mark1);
	m_IDList->addChild(mark2);
	m_IDList->addChild(mark3);
	m_IDList->addChild(mark4);
	m_IDList->setVisible(false);
	addChild(m_IDList);

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
				if (target == m_markID && !m_player->isForwardPlayer())
					m_IDList->setVisible(!m_IDList->isVisible());
				else if (target == mark1) {
					setMarkID(ECharID::NONE);
					m_IDList->setVisible(false); 
				}
				else if (target == mark2) {
					setMarkID(ECharID::MINISTER);
					m_IDList->setVisible(false); 
				}
				else if (target == mark3) {
					setMarkID(ECharID::SPY);
					m_IDList->setVisible(false); 
				}
				else if (target == mark4) {
					setMarkID(ECharID::INSURGENT);
					m_IDList->setVisible(false); 
				}
			}
		}
		touchFlag = 0;
	};

	listener->onTouchCancelled = [=](Touch * touch, Event * event) {
		touchFlag = 0;
	};

	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, m_markID);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener->clone(), mark1);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener->clone(), mark2);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener->clone(), mark3);
	_eventDispatcher->addEventListenerWithSceneGraphPriority(listener->clone(), mark4);

	return true;
}

void UI_ID::setMarkID(ECharID ID) {
	auto label = static_cast<Label *>(m_markID->getChildByTag(0));
	switch (ID) {
		case ECharID::NONE:
			label->setString(TextManager::gbkToUtf8("？"));
			break;
		case ECharID::INSURGENT:
			label->setString(TextManager::gbkToUtf8("反"));
			break;
		case ECharID::LORD:
			label->setString(TextManager::gbkToUtf8("主"));
			break;
		case ECharID::MINISTER:
			label->setString(TextManager::gbkToUtf8("忠"));
			break;
		case ECharID::SPY:
			label->setString(TextManager::gbkToUtf8("内"));
			break;
		default: throw "Can't find match"; break;
	}
}
