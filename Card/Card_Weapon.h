#ifndef Card_Weapon_h__
#define Card_Weapon_h__

#include <memory>
#include "Player\Player.h"
#include "Card_Equipment.h"

class Card_Weapon : public Card_Equipment {

public:
	int m_attackRange;

	int getGoalPlayerQuantity(const std::shared_ptr<Player> requester) const;

	int getAttackRange() const;

	void useCard(const std::shared_ptr<Player> playCardPlayer, const std::vector<std::shared_ptr<Player>>& goalPlayer) const;
};
#endif // Card_Weapon_h__
