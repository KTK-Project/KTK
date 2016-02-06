#ifndef Card_IceSword_h__
#define Card_IceSword_h__


class Card_IceSword : public Card_Weapon {


public:
	void eventResolve(Event_Slash& slashEvent);
};
#endif // Card_IceSword_h__
