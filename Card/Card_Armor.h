#ifndef Card_Armor_h__
#define Card_Armor_h__


class Card_Armor : public Card_Equipment {

public:
	bool m_valid;

	int getM_goalPlayerQuantity(Player* requester);

	bool getM_valid();

	void setM_valid(bool m_valid);
};
#endif // Card_Armor_h__
