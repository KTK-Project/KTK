#include "UI_JudgeIcon.h"
#include "cocos2d.h"
#include "Manager\TextManager.h"

using namespace cocos2d;
using namespace cocos2d::ui;

bool UI_JudgeIcon::initWithPlayer(const std::shared_ptr<Player> & player) {
	if (!Node::init())
		return false;

	m_player = player;

	for (int i = 0; i < 2; i++) {
		auto layerColor = LayerColor::create(Color4B::BLACK);
		layerColor->setContentSize(Size(40, 40));
		layerColor->setRotation(45);
		layerColor->setVisible(false);
		layerColor->setPosition(i * 70, 0);
		m_icon.push_back(layerColor);

		auto size = layerColor->getContentSize();

		auto label = Label::create("", "ziti.otf", 24);
		label->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
		label->setPosition(size.width / 2, size.height / 2);
		label->setRotation(-45);
		label->setTag(0);
		layerColor->addChild(label);
		addChild(layerColor);
	}

	refresh(); 
	return true;
}

void UI_JudgeIcon::refresh() { 
	auto vec = m_player.lock()->getJudgeCards();
	for (int i = 0; i < vec.size(); i++) {
		if (vec[i]->getName() == ECardName::DROWNINHAPPINESS) {
			auto label = static_cast<Label *>(m_icon[i]->getChildByTag(0));
			label->setString(TextManager::gbkToUtf8("¿÷"));
		}
		else if (vec[i]->getName() == ECardName::LIGHTNING) {
			auto label = static_cast<Label *>(m_icon[i]->getChildByTag(0));
			label->setString(TextManager::gbkToUtf8("…¡"));
		}
		else throw "Can't find match!";
	}

	for (int i = 0; i < 2; i++)
		if (i < vec.size())
			m_icon[i]->setVisible(true);
		else
			m_icon[i]->setVisible(false);
}
