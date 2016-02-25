#ifndef Card_Weapon_h__
#define Card_Weapon_h__

#include <memory>
#include "Player\Player.h"
#include "Card_Equipment.h"

class Card_Weapon : public Card_Equipment {
public:
	Card_Weapon(ECardName name, ECardSuit suit, int number) : Card_Equipment(name, suit, number, EEquipmentCard_Type::WEAPON) { }
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const override;
	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const override;
//	Todo:stm
	virtual int getAttackRange() const;	// = 0
	virtual ~Card_Weapon() = 0 { }
private:
	int m_attackRange;
};
#endif // Card_Weapon_h__
