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
	void init() const;

	void setWeapon(const std::shared_ptr<Card> m_weapon) const;

	void setArmor(const std::shared_ptr<Card> m_armor) const;

	void setDefensiveHorse(const std::shared_ptr<Card> m_defensiveHorse) const;

	void setOffensiveHorse(const std::shared_ptr<Card> m_offensiveHorse) const;

	void setEquipmentPanalState(const std::shared_ptr<Card> card, const EquipmentPanalState state) const;

	void refresh() const;
};
#endif // UI_EquipmentPanal_h__
