#ifndef Card_CoupleSwords_h__
#define Card_CoupleSwords_h__


class Card_CoupleSwords : public Card_Weapon {


public:
	void eventResolve(Event_Slash& slashEvent);
};
#endif // Card_CoupleSwords_h__
