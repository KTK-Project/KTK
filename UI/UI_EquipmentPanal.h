#ifndef UI_EquipmentPanal_h__
#define UI_EquipmentPanal_h__

#include "cocos2d.h"
#include "Card\Card.h"
#include "Manager\KTK_Enum.h"

class UI_EquipmentPanal {

private:
	cocos2d::Sprite* m_weapon;
	cocos2d::Sprite* m_armor;
	cocos2d::Sprite* m_defensiveHorse;
	cocos2d::Sprite* m_offensiveHorse;

public:
	void init();

	void setWeapon(std::shared_ptr<Card> m_weapon);

	void setArmor(std::shared_ptr<Card> m_armor);

	void setDefensiveHorse(std::shared_ptr<Card> m_defensiveHorse);

	void setOffensiveHorse(std::shared_ptr<Card> m_offensiveHorse);

	void setEquipmentPanalState(std::shared_ptr<Card> card, EquipmentPanalState state);

	void refresh();
};
#endif // UI_EquipmentPanal_h__
