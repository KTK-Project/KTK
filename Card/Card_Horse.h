#ifndef Card_Horse_h__
#define Card_Horse_h__

#include "Card_Equipment.h"
#include "Manager\KTK_Enum.h"
#include <memory>
#include "Player\Player.h"

class Card_Horse : public Card_Equipment {

public:
	Horse_Type m_horseType;

	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	void getHorseType();
};
#endif // Card_Horse_h__
