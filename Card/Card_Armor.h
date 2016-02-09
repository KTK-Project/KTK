#ifndef Card_Armor_h__
#define Card_Armor_h__

#include "Card_Equipment.h"

class Card_Armor : public Card_Equipment {

public:
	bool m_valid;

	int getM_goalPlayerQuantity(std::shared_ptr<Player> requester);

	bool getM_valid();

	void setM_valid(bool m_valid);
};
#endif // Card_Armor_h__
