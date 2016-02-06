#ifndef Card_MurderWithBorrowedWeapon_h__
#define Card_MurderWithBorrowedWeapon_h__


class Card_MurderWithBorrowedWeapon : public Card_Strategy {


public:
	int getM_goalPlayerQuantity(Player* requester);

	vector<Player*> getCandidate(Player* playCardPlayer);

	void onUpping();

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_MurderWithBorrowedWeapon_h__
