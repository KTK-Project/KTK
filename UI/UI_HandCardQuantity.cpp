#include "UI_HandCardQuantity.h"
#include "Manager\TextManager.h"

using namespace cocos2d;

bool UI_HandCardQuantity::initWithPlayer(const std::shared_ptr<Player> & player) {
	if (!Node::init())
		return false;

	m_player = player;

	auto size = Size(40, 40);
	m_quantityBackground = LayerColor::create(Color4B::BLACK);
	m_quantityBackground->setContentSize(size);
	addChild(m_quantityBackground);

	m_quantity = Label::create("", "ziti.otf", 23);
	m_quantity->setPosition(Vec2(size.width / 2, size.height / 2 - 2));
	m_quantityBackground->addChild(m_quantity);

	refresh();
	return true;
}

void UI_HandCardQuantity::refresh() {
	int quantity = m_player.lock()->getHandCardPile().getSize();
	m_quantity->setString(TextManager::intToString(quantity));
}
