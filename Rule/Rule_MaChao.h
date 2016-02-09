#ifndef Rule_MaChao_h__
#define Rule_MaChao_h__

#include "Rule_Character.h"
#include "Player/Player.h"

class Rule_MaChao : public Rule_Character {


public:
	int getDistance(std::shared_ptr<Player> player);

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void tieQi(std::shared_ptr<Event_Base>& event);
};
#endif // Rule_MaChao_h__
