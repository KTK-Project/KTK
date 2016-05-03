#ifndef UI_EquipmentPanal_h__
#define UI_EquipmentPanal_h__

#include "cocos2d.h"
#include "Card\Card.h"
#include "Manager\KTK_Enum.h"
#include "Player\Player.h"

class UI_EquipmentPanal : public cocos2d::Node {
public:
	static UI_EquipmentPanal * create(const std::shared_ptr<Player> & player) {
		UI_EquipmentPanal * pRet = new(std::nothrow) UI_EquipmentPanal();
		if (pRet && pRet->initWithPlayer(player)) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool initWithPlayer(const std::shared_ptr<Player> & player);
	void setEquipmentPanalState(EEquipmentPanalType type, EEquipmentPanalState state);
	void setEquipmentPanalTouchEvent(EEquipmentPanalType type, std::function<void()> callBack);
	void refresh();
protected:
	UI_EquipmentPanal() = default;
private:
	std::weak_ptr<Player> m_player;
	cocos2d::LayerColor * m_weapon;
	cocos2d::LayerColor * m_armor;
	cocos2d::LayerColor * m_defensiveHorse;
	cocos2d::LayerColor * m_offensiveHorse;
	std::vector<std::function<void()>> m_touchEvents;
};
#endif // UI_EquipmentPanal_h__
