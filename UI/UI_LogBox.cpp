#include "UI_LogBox.h"
#include "cocos2d.h"
#include "Manager\TextManager.h"

using namespace cocos2d;
using namespace cocos2d::ui;

bool UI_LogBox::init() {
	if(!Node::init())
		return false;

	m_counter = 0;

	auto size = Size(275, 505);
	m_listView = ListView::create();
	m_listView->setDirection(ScrollView::Direction::VERTICAL);
	m_listView->setBackGroundImage("png/ui/black.png");
	m_listView->setBounceEnabled(true);
	m_listView->setBackGroundImageScale9Enabled(true);
	m_listView->setContentSize(size);
	m_listView->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	m_listView->setPosition(Vec2::ZERO);
	addChild(m_listView);

	setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	setContentSize(size);
	return true;
}

void UI_LogBox::addLog(const std::string & log) {
	m_counter++;
	auto str = TextManager::intToString(m_counter) + ": " + log;
	auto label = Label::create(str.c_str(), "ziti.otf", 17);
	label->setAnchorPoint(Vec2::ZERO);
	label->setPosition(Vec2::ZERO);
	label->setWidth(m_listView->getContentSize().width);
	auto layout = Layout::create();
	layout->setContentSize(label->getContentSize());
	layout->addChild(label);
	m_listView->addChild(layout);
	m_listView->scrollToBottom(0.1f, false);
}
