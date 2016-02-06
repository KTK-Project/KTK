#ifndef UI_EquipmentPanal_h__
#define UI_EquipmentPanal_h__


class UI_EquipmentPanal {

private:
	Sprite* m_weapon;
	Sprite* m_armor;
	Sprite* m_defensiveHorse;
	Sprite* m_offensiveHorse;

public:
	void init();

	void setM_weapon(Card* m_weapon);

	void setM_armor(Card* m_armor);

	void setM_defensiveHorse(Card* m_defensiveHorse);

	void setM_offensiveHorse(Card* m_offensiveHorse);

	void setEquipmentPanalState(Card* card, EquipmentPanalState state);

	void refresh();
};
#endif // UI_EquipmentPanal_h__
