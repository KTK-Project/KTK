#include "UI_Message.h"
#include "cocos2d.h"
#include "ui\CocosGUI.h"
#include "Manager\TextManager.h"

using namespace cocos2d;
using namespace cocos2d::ui;

bool UI_Message::init() {
	if (!Node::init())
		return false;

	m_message = Label::create("", "ziti.otf", 30);
	m_message->setAnchorPoint(Vec2::ANCHOR_MIDDLE_BOTTOM);
	m_message->setAlignment(TextHAlignment::CENTER);
	m_message->setColor(Color3B::BLACK);
	m_message->setPosition(Vec2(0, 30));
	m_message->setWidth(800);
	addChild(m_message);

	auto size = Size(75, 30);

	m_button1 = Button::create("png\\ui\\green.png", "png\\ui\\black.png", "png\\ui\\black.png");
	m_button1->setScale9Enabled(true);
	m_button1->setContentSize(size);
	m_button1->setTitleText(TextManager::gbkToUtf8("确定"));
	m_button1->setTitleFontName("ziti.otf");
	m_button1->setTitleColor(Color3B::BLACK);
	m_button1->setTitleFontSize(23);
	m_button1->setAnchorPoint(Vec2::ANCHOR_MIDDLE_BOTTOM);
	m_button1->setPosition(Vec2(-50, 0));
	addChild(m_button1);


	m_button2 = Button::create("png\\ui\\green.png", "png\\ui\\black.png", "png\\ui\\black.png");
	m_button2->setScale9Enabled(true);
	m_button2->setContentSize(size);
	m_button2->setTitleText(TextManager::gbkToUtf8("取消"));
	m_button2->setTitleFontName("ziti.otf");
	m_button2->setTitleColor(Color3B::BLACK);
	m_button2->setTitleFontSize(23);
	m_button2->setAnchorPoint(Vec2::ANCHOR_MIDDLE_BOTTOM);
	m_button2->setPosition(Vec2(50, 0));
	m_button2->addTouchEventListener([=](Ref* pSender, Widget::TouchEventType type) {
		switch (type) {
			case Widget::TouchEventType::BEGAN: break;
			case Widget::TouchEventType::MOVED: break;
			case Widget::TouchEventType::ENDED:
				// 				message->setString(tr("触摸事件类型：ENDED"));
				break;
			case Widget::TouchEventType::CANCELED: break;
			default: throw "Can't find match!"; break;
		}
	});
	addChild(m_button2);

	scheduleUpdate();
	return true;
}

void UI_Message::setString(const std::string & string) {
	m_message->setString(string);
}

void UI_Message::setVisible(bool visible) {
	Node::setVisible(visible);
	if (visible) scheduleUpdate();
	else unscheduleUpdate();
}

void UI_Message::setButton1ValidCheck(const std::function<bool()> & button1ValidCheck) {
	m_button1ValidCheck = button1ValidCheck;
}

void UI_Message::setButton2ValidCheck(const std::function<bool()> & button2ValidCheck) {
	m_button2ValidCheck = button2ValidCheck;
}

void UI_Message::setButton1CallBack(const std::function<void()> & button1CallBack) {
	m_button1->addTouchEventListener([=](Ref* pSender, Widget::TouchEventType type) {
		switch (type) {
			case Widget::TouchEventType::BEGAN: break;
			case Widget::TouchEventType::MOVED: break;
			case Widget::TouchEventType::ENDED: button1CallBack(); break;
			case Widget::TouchEventType::CANCELED: break;
			default: throw "Can't find match!"; break;
		}
	});
}

void UI_Message::setButton2CallBack(const std::function<void()> & button2CallBack) {
	m_button1->addTouchEventListener([=](Ref* pSender, Widget::TouchEventType type) {
		switch (type) {
			case Widget::TouchEventType::BEGAN: break;
			case Widget::TouchEventType::MOVED: break;
			case Widget::TouchEventType::ENDED: button2CallBack(); break;
			case Widget::TouchEventType::CANCELED: break;
			default: throw "Can't find match!"; break;
		}
	});
}

void UI_Message::update(float delta) {
	m_button1->setEnabled(m_button1ValidCheck());
	m_button1->setBright(m_button1ValidCheck());
	m_button2->setEnabled(m_button2ValidCheck());
	m_button2->setBright(m_button2ValidCheck());
}
