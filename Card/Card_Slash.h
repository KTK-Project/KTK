#ifndef Card_Slash_h__
#define Card_Slash_h__

#include "Card_Basic.h"
#include <memory>
#include <vector>
#include "Event\Event_Base.h"
#include "Player\Player.h"

class Card_Slash : Card_Basic {

public:
	bool s_usedOnce;

	int getGoalPlayerQuantity(std::shared_ptr<Player> requester);

	std::vector<std::shared_ptr<Player>> getCandidate(std::shared_ptr<Player> playCardPlayer);

	void useCard(std::shared_ptr<Player> playCardPlayer, std::vector<std::shared_ptr<Player>>& goalPlayer);

	void eventCallBack(std::shared_ptr<Event_Base>& event);
};
#endif // Card_Slash_h__
