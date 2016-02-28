#ifndef UI_EquipmentPanal_h__
#define UI_EquipmentPanal_h__

#include "cocos2d.h"
#include "Card\Card.h"
#include "Manager\KTK_Enum.h"

class UI_EquipmentPanal : public cocos2d::Node {
public:
	static UI_EquipmentPanal * create() {
		UI_EquipmentPanal * pRet = new(std::nothrow) UI_EquipmentPanal();
		if (pRet && pRet->init()) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool init();
	void setWeapon(const std::shared_ptr<Card> & weapon);
	void setArmor(const std::shared_ptr<Card> & armor);
	void setDefensiveHorse(const std::shared_ptr<Card> & defensiveHorse);
	void setOffensiveHorse(const std::shared_ptr<Card> & offensiveHorse);
	void setEquipmentPanalState(const std::shared_ptr<Card> & card, EEquipmentPanalState & state);
	void refresh() const;
protected:
	UI_EquipmentPanal() = default;
private:
	cocos2d::Sprite * m_weapon;
	cocos2d::Sprite * m_armor;
	cocos2d::Sprite * m_defensiveHorse;
	cocos2d::Sprite * m_offensiveHorse;
};
#endif // UI_EquipmentPanal_h__
