#ifndef Card_Weapon_h__
#define Card_Weapon_h__

#include <memory>
#include "Player\Player.h"
#include "Card_Equipment.h"

class Card_Weapon : public Card_Equipment {

public:
	int m_attackRange;

	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	int getAttackRange();

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_Weapon_h__
