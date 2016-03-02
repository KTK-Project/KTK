#include "cocos2d.h"
#include "UI_Card.h"
#include <memory>
#include <string>
#include "Manager\TextManager.h"
#include "Manager\GameManager.h"

using std::shared_ptr;
using std::string;
using namespace cocos2d;

bool UI_Card::initWithCard(const std::shared_ptr<Card> & card) {
	if (!Node::init())
		return false;

	string path;

	path += "png\\card\\";
	path += GameManager::getInstance()->getTextManger().getStringOfCardName(card->getName());
	path += ".png";
	m_cardPattern = Sprite::create(path);
	m_cardPattern->setAnchorPoint(Vec2::ZERO);
	m_cardPattern->setPosition(Vec2::ZERO);
	auto cardSize = m_cardPattern->getContentSize();

	path.clear();
	path += "png\\suit\\";
	path += GameManager::getInstance()->getTextManger().getStringOfSuit(card->getSuit());
	path += ".png";
	m_suit = Sprite::create(path);
	m_suit->setScale(0.2f);
	m_suit->setPosition(23, cardSize.height - 37);

	m_number = Label::create(GameManager::getInstance()->getTextManger().getTextOfNumber(card->getNumber()), "ziti.otf", 13);
	switch (card->getColor()) {
		case ECardColor::BLACK: m_number->setColor(Color3B::BLACK); break;
		case ECardColor::RED: m_number->setColor(Color3B::RED); break;
		default: throw "Can't find match!"; break;
	}
	m_number->setPosition(23, cardSize.height - 23);

	m_cardPattern->addChild(m_suit);
	m_cardPattern->addChild(m_number);
	addChild(m_cardPattern);

	// 设置UI_Card的大小为卡牌图片的大小。
	setContentSize(cardSize);
	setAnchorPoint(Vec2::ANCHOR_MIDDLE);

	// 其他属性初始化
	initListener();
	m_card = card;
	setDark(false);
	setCanUp(false);
	setUpping(false);
	setUpCallBack([](const UI_Card *) {});
	setDownCallBack([](const UI_Card *) {});

	return true;
}

void UI_Card::initListener() {
	m_touchFlag = 0;
	m_listener = EventListenerTouchOneByOne::create();
	m_listener->onTouchBegan = [=](Touch * touch, Event * event) {
		auto target = static_cast<UI_Card *>(event->getCurrentTarget());
		auto point = target->convertToNodeSpace(touch->getLocation());
		auto size = target->getContentSize();
		auto rect = Rect(Vec2::ZERO, size);
		if (rect.containsPoint(point)) {
			m_touchFlag = 1;
			return true;
		}
		return false;
	};

	m_listener->onTouchEnded = [=](Touch * touch, Event * event) {
		auto target = static_cast<UI_Card *>(event->getCurrentTarget());
		auto point = target->convertToNodeSpace(touch->getLocation());
		auto size = target->getContentSize();
		auto rect = Rect(Vec2::ZERO, size);
		if (rect.containsPoint(point)) {
			m_touchFlag++;
			if (m_touchFlag == 2)
				setUpping(!getUpping());
		}
		else
			m_touchFlag = 0;
	};

	m_listener->onTouchCancelled = [=](Touch * touch, Event * event) {
		m_touchFlag = 0;
	};
}

const std::shared_ptr<Card> & UI_Card::getCard() const {
	return m_card;
}

void UI_Card::setDescription(cocos2d::Label * description) {
	m_description = description;
}

bool UI_Card::getDark() const {
	return m_dark;
}

void UI_Card::setDark(bool dark) {
	if (m_dark == dark)
		return;
	m_dark = dark;
	float time = 1.3;
	if (dark) {
		m_cardPattern->runAction(TintTo::create(time, 255 * 0.45, 255 * 0.45, 255 * 0.45));
		m_suit->runAction(TintTo::create(time, 255 * 0.45, 255 * 0.45, 255 * 0.45));
		m_number->runAction(TintTo::create(time, m_number->getColor().r * 0.45, m_number->getColor().g * 0.45, m_number->getColor().b * 0.45));
		runAction(DelayTime::create(time));
	}
	else {
		m_cardPattern->runAction(TintTo::create(time, 255, 255, 255));
		m_suit->runAction(TintTo::create(time, 255, 255, 255));
		m_number->runAction(TintTo::create(time, m_number->getColor().r, m_number->getColor().g, m_number->getColor().b));
		runAction(DelayTime::create(time));
	}
}

bool UI_Card::getCanUp() const {
	return m_canUp;
}

void UI_Card::setCanUp(bool canUp) {
	if (canUp == m_canUp)
		return;
	m_canUp = canUp;
	if (canUp)
		_eventDispatcher->addEventListenerWithSceneGraphPriority(m_listener, this);
	else
		_eventDispatcher->removeEventListener(m_listener);
}

bool UI_Card::getUpping() const {
	return m_upping;
}

void UI_Card::setUpping(bool upping) {
	if (upping == m_upping)
		return;
	float time = 0.3;
	if (upping && !m_upping) {
		auto action1 = MoveBy::create(time, Vec2(0, 20));
		auto action2 = CallFunc::create(std::bind(m_upCallBack, this));
		auto action3 = Sequence::create(action1, action2, nullptr);
		runAction(action3);
	}
	else if(!upping && m_upping) {
		auto action1 = MoveBy::create(time, Vec2(0, -20));
		auto action2 = CallFunc::create(std::bind(m_downCallBack, this));
		auto action3 = Sequence::create(action1, action2, nullptr);
		runAction(action3);
	}
	m_upping = upping;
}

void UI_Card::setUpCallBack(const std::function<void(const UI_Card *)> & upCallBack) {
	m_upCallBack = upCallBack;
}

void UI_Card::setDownCallBack(const std::function<void(const UI_Card *)> & downCallBack) {
	m_downCallBack = downCallBack;
}

cocos2d::Action * UI_Card::runAction(cocos2d::Action * action) {
//	Todo:stm lock和unlock
	return Node::runAction(action);
}

//	Todo:stm delete or not?
// EventListenerTouchOneByOne * UI_Card::getListener() const {
// 	return m_listener;
// }
