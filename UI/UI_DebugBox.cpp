#include "UI_DebugBox.h"
#include "cocos2d.h"
#include "Manager\TextManager.h"

using namespace cocos2d;
using namespace cocos2d::ui;

bool UI_DebugBox::init() {
	if(!Node::init())
		return false;

	m_counter = 0;

	m_listView = ListView::create();
	m_listView->setDirection(ScrollView::Direction::VERTICAL);
	m_listView->setBackGroundImage("png\\ui\\logBox2.png");
	m_listView->setBounceEnabled(true);
	m_listView->setBackGroundImageScale9Enabled(true);
	m_listView->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	m_listView->setContentSize(Size(300, 250));
	m_listView->setPosition(Vec2(0, 17));
	addChild(m_listView);

	auto layerColor = LayerColor::create(Color4B::BLACK);
	layerColor->setContentSize(Size(300, 30));
	layerColor->setPosition(Vec2(-150, -137));
	addChild(layerColor);

	auto m_lineEdit = TextField::create("", "Arial", 18);
	m_lineEdit->setPlaceHolder(TextManager::gbkToUtf8("ÇëÊäÈëÃüÁî"));
	m_lineEdit->setPlaceHolderColor(Color4B::RED);
	m_lineEdit->setPosition(Vec2(layerColor->getContentSize().width / 2, layerColor->getContentSize().height / 2));
	m_lineEdit->addEventListener([=](Ref *pSender, TextField::EventType type) {
		switch (type) {
			case TextField::EventType::ATTACH_WITH_IME: break;
			case TextField::EventType::DETACH_WITH_IME:
			{
				std::string value = m_lineEdit->getStringValue();
				if (value.length() > 0) {
// 					´Ë´¦½âÎöÃüÁî
				}
				m_lineEdit->setString("");
			}
			break;
			case TextField::EventType::INSERT_TEXT: break;
			case TextField::EventType::DELETE_BACKWARD: break;
			default: break;
		}
	});
	layerColor->addChild(m_lineEdit);

	setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	return true;
}

void UI_DebugBox::addLog(const std::string & log) {
	m_counter++;
	auto Str = std::to_string(m_counter) + ": " + log;
	auto label = Label::create(Str.c_str(), "ziti.otf", 20);
	label->setAnchorPoint(Vec2::ZERO);
	label->setPosition(Vec2::ZERO);
	label->setWidth(300);
	auto layout = Layout::create();
	layout->setContentSize(label->getContentSize());
	layout->addChild(label);
	m_listView->addChild(layout);
	m_listView->scrollToBottom(0.1f, false);
}
