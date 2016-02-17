#ifndef Card_Dodge_h__
#define Card_Dodge_h__

#include "Card_Basic.h"
#include <memory>
#include "Player\Player.h"

class Card_Dodge : Card_Basic {


public:
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;
};
#endif // Card_Dodge_h__
