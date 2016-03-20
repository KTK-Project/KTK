#include "UI_SkillPanal.h"
#include "cocos2d.h"
#include "Manager\GameManager.h"

using namespace cocos2d;

bool UI_SkillPanal::initWithPlayer(const std::shared_ptr<Player> & player) {
	if (!Node::init())
		return false;

	m_player = player;
	auto skillList = player->getCharacter().getSkillList();
	for (int i = 0; i < skillList.getSize(); i++) {
		auto skillName = skillList.getSkillByIndex(i).getSkillName();
		float boxWidth = (100 - (skillList.getSize() - 1) * 4) / skillList.getSize();
		float boxHeight = 20;

		auto skillIcon = LayerColor::create(Color4B::BLACK, boxWidth, boxHeight);
		skillIcon->setContentSize(Size(boxWidth, boxHeight));
		skillIcon->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
		skillIcon->setPosition((boxWidth + 4) * i, 0);

		auto skillLabel = Label::create(GameManager::getInstance()->getTextManger().getTextOfSkillName(skillName), "ziti.otf", 15);
		skillLabel->setAnchorPoint(Vec2::ANCHOR_MIDDLE);
		skillLabel->setPosition(boxWidth / 2, boxHeight / 2 - 1);

		skillIcon->addChild(skillLabel);
		addChild(skillIcon);

		m_skillIcons.push_back(skillIcon);
		m_skillLabel.push_back(skillLabel);
		m_skillCallBack.push_back([]() {});

		static int touchFlag = 0;
		auto listener = EventListenerTouchOneByOne::create();
		listener->onTouchBegan = [=](Touch * touch, Event * event) {
			auto target = static_cast<LayerColor *>(event->getCurrentTarget());
			auto point = target->convertToNodeSpace(touch->getLocation());
			auto size = target->getContentSize();
			auto rect = Rect(Vec2::ZERO, size);
			if (rect.containsPoint(point)) {
				touchFlag++;
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
				if (touchFlag == 2)
					m_skillCallBack[i]();
			}
			touchFlag = 0;
		};
		listener->onTouchCancelled = [=](Touch * touch, Event * event) {
			touchFlag = 0;
		};
		_eventDispatcher->addEventListenerWithSceneGraphPriority(listener, skillIcon);
	}

	setContentSize(Size(100, 20));
	setAnchorPoint(Vec2::ANCHOR_MIDDLE);
	return true;
}

void UI_SkillPanal::setSkillState(ESkillName skillName, ESkillState skillState) {
	auto skillList = m_player.lock()->getCharacter().getSkillList();
	for (int i = 0; i < skillList.getSize(); i++) {
		if (skillList.getSkillByIndex(i).getSkillName() == skillName) {
			switch (skillState) {
				case ESkillState::CANTUSE:
					m_skillIcons[i]->setColor(Color3B::BLACK);
					break;
				case ESkillState::CANUSE:
					m_skillIcons[i]->setColor(Color3B::GREEN);
					break;
				case ESkillState::USING:
					m_skillIcons[i]->setColor(Color3B::BLUE);
					break;
				default: throw "Can't find match"; break;
			}
		}
	}
}

void UI_SkillPanal::setSkillCallBack(ESkillName skillName, const std::function<void()> & skillCallBack) {
	auto skillList = m_player.lock()->getCharacter().getSkillList();
	for (int i = 0; i < skillList.getSize(); i++)
		if (skillList.getSkillByIndex(i).getSkillName() == skillName)
			m_skillCallBack[i] = skillCallBack;
}

void UI_SkillPanal::refresh() {
	auto skillList = m_player.lock()->getCharacter().getSkillList();
	for (int i = 0; i < skillList.getSize(); i++) {
		auto skillName = skillList.getSkillByIndex(i).getSkillName();
		auto skillState = skillList.getSkillByIndex(i).getSkillState();
		setSkillState(skillName, skillState);
	}
}
