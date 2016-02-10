#ifndef Card_MurderWithBorrowedWeapon_h__
#define Card_MurderWithBorrowedWeapon_h__

#include <memory>
#include <vector>
#include "Card_Strategy.h"
#include "Player\Player.h"

class Card_MurderWithBorrowedWeapon : public Card_Strategy {


public:
	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	std::vector<std::shared_ptr<Player>> getCandidate(std::shared_ptr<Player> playCardPlayer);

	void onUpping();

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);
};
#endif // Card_MurderWithBorrowedWeapon_h__
