#ifndef Card_KylinBow_h__
#define Card_KylinBow_h__


class Card_KylinBow : public Card_Weapon {


public:
	void eventResolve(Event_Slash& slashEvent);
};
#endif // Card_KylinBow_h__
