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

	int getGoalPlayerQuantity(const std::shared_ptr<Player> & requester) const;

	std::vector<std::shared_ptr<Player>> getCandidates(const std::shared_ptr<Player> & playCardPlayer) const;

	void useCard(const std::shared_ptr<Player> & playCardPlayer, const std::vector<std::shared_ptr<Player>> & goalPlayer) const;

	void eventCallBack(const std::shared_ptr<Event_Base>& event) const;
};
#endif // Card_Slash_h__
