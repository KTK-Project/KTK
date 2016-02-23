#ifndef Card_Horse_h__
#define Card_Horse_h__

#include <memory>
#include "Card_Equipment.h"
#include "Manager\KTK_Enum.h"
#include "Player\Player.h"

class Card_Horse : public Card_Equipment {
public:
	Card_Horse(ECardName name, ECardSuit suit, int number);
	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const override;
	EHorseType getHorseType() const;
	virtual ~Card_Horse() = 0 { }
private:
	EHorseType m_horseType;
};
#endif // Card_Horse_h__
