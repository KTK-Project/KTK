#ifndef Card_Weapon_h__
#define Card_Weapon_h__


class Card_Weapon : public Card_Equipment {

public:
	int m_attackRange;

	int getM_goalPlayerQuantity(Player* requester);

	int getAttackRange();

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_Weapon_h__
