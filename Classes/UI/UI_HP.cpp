#include "UI_HP.h"
#include "cocos2d.h"

using namespace cocos2d;
using namespace cocos2d::ui;

bool UI_HP::initWithPlayer(const std::shared_ptr<Player> & player) {
	if (!Node::init())
		return false;

	m_player = player;

	for (int i = 0; i < m_player.lock()->getMaxHP(); i++) {
		auto emptyBlood = LayerColor::create(Color4B::WHITE);
		emptyBlood->setContentSize(Size(20, 20));
		emptyBlood->setPosition(Vec2(0, i * 25));
		emptyBlood->setRotation(45);
		addChild(emptyBlood, m_player.lock()->getMaxHP() - i);
		m_emptyBloods.push_back(emptyBlood);

		auto blood = LayerColor::create(Color4B::RED);
		blood->setContentSize(Size(20, 20));
		blood->setPosition(Vec2(0, i * 25));
		blood->setRotation(45);
		addChild(blood, m_player.lock()->getMaxHP() - i);
		m_bloods.push_back(blood);
	}

	refresh();
	return true;
}

void UI_HP::refresh() const {
	for (int i = 0; i < m_player.lock()->getMaxHP(); i++)
		if (i < m_player.lock()->getHP())
			m_bloods[i]->setVisible(true);
		else
			m_bloods[i]->setVisible(false);
}
