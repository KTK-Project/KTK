#ifndef Card_Horse_h__
#define Card_Horse_h__


class Card_Horse : public Card_Equipment {

public:
	Horse_Type m_horseType;

	int getM_goalPlayerQuantity(Player* requester);

	void getHorseType();
};
#endif // Card_Horse_h__
