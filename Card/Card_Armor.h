#ifndef Card_Armor_h__
#define Card_Armor_h__

#include "Card_Equipment.h"

class Card_Armor : public Card_Equipment {

public:
	bool m_valid;

	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	bool getValid();

	void setValid(bool m_valid);
};
#endif // Card_Armor_h__
