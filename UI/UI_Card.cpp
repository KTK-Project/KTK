#include "cocos2d.h"
#include "UI_Card.h"
#include <memory>
#include <string>
#include "Manager\TextManager.h"
#include "Manager\GameManager.h"

using std::shared_ptr;
using std::string;
using cocos2d::Sprite;
using cocos2d::Label;
using cocos2d::Action;
using cocos2d::EventListenerTouchOneByOne;
using cocos2d::Color3B;

bool UI_Card::initWithCard(const std::shared_ptr<Card> & card) {
	string path;

	path += "png\\card\\";
	path += GameManager::getInstance()->getTextManger().getStringOfCardName(card->getName());
	path += ".png";
	m_cardPattern = Sprite::create(path);
	auto cardSize = m_cardPattern->getContentSize();

	path.clear();
	path += "png\\suit\\";
	path += GameManager::getInstance()->getTextManger().getStringOfSuit(card->getSuit());
	path += ".png";
	m_suit = Sprite::create(path);
	m_suit->setScale(0.2);
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
	return true;
}

void UI_Card::initListenToUpDown() const {
	//listener的初始化：触摸时：设置upping为相反。
	// TODO - implement UI_Card::initListenToUpDown
	throw "Not yet implemented";
}

const std::shared_ptr<Card> & UI_Card::getCard() const {
	return m_card;
}

void UI_Card::setCard(const std::shared_ptr<Card> & card) {
	m_card = card;
}

void UI_Card::setDescription(cocos2d::Label * description) {
	m_description = description;
}

bool UI_Card::getDark() const {
	return m_dark;
}

void UI_Card::setDark(bool dark) {
	//	Todo:stm
		//if(true)	使其变暗
	//if(false)	不变暗
	throw "Not yet implemented";
}

bool UI_Card::getCanUp() const {
	return m_canUp;
}

void UI_Card::setCanUp(bool canUp) {
	//	Todo:stm
		//设置canUp属性
	//true : 调用addEventListenerWithSceneGraphPriority
	//false:调用removeEventListener
	throw "Not yet implemented";
}

bool UI_Card::getUpping() const {
	return m_upping;
}

void UI_Card::setUpping(bool upping) {
	//	Todo:stm
		//if(已经是up或down) return;
	//设置upping，并且发出动作事件。
	//if(true)	调用upCallBack
	//if(false)	调用downCallBack
	throw "Not yet implemented";
}

void UI_Card::setUpCallBack(const std::function<void(const UI_Card *)> & upCallBack) {
	m_upCallBack = upCallBack;
}

void UI_Card::setDownCallBack(const std::function<void(const UI_Card *)> & downCallBack) {
	m_downCallBack = downCallBack;
}

cocos2d::Action * UI_Card::runAction(const cocos2d::Action * action) const {
	//把action封装为（Eventmanager.increase, action, eventmanager.decrease）
	// TODO - implement UI_Card::runAction
	throw "Not yet implemented";
}

EventListenerTouchOneByOne * UI_Card::getListener() const {
	return m_listener;
}
