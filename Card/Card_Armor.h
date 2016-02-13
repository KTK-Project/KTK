#ifndef Card_Armor_h__
#define Card_Armor_h__

#include "Card_Equipment.h"

class Card_Armor : public Card_Equipment {

public:
	bool m_valid;

	int getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const;

	bool getValid() const;

	void setValid(const bool m_valid) const;
};
#endif // Card_Armor_h__
