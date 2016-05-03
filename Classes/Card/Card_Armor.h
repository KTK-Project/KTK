#ifndef Card_Armor_h__
#define Card_Armor_h__

#include "Card_Equipment.h"

class Card_Armor : public Card_Equipment {
public:
	Card_Armor(ECardName name, ECardSuit suit, int number) : Card_Equipment(name, suit, number, EEquipmentCard_Type::ARMOR) { }
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const override;
	bool getValid() const;
	void setValid(bool valid) ;
	virtual ~Card_Armor() { }
private:
	bool m_valid;
};
#endif // Card_Armor_h__
