#ifndef Card_JusticeShield_h__
#define Card_JusticeShield_h__


class Card_JusticeShield : public Card_Armor {


public:
	void eventResolve(Event_Slash& slashEvent);
};
#endif // Card_JusticeShield_h__
