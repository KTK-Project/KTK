#ifndef Rule_MaChao_h__
#define Rule_MaChao_h__

#include "Rule_Character.h"
#include "Player/Player.h"

class Rule_MaChao : public Rule_Character {


public:
	int getDistance(const std::shared_ptr<Player> player) const;

	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void tieQi(const std::shared_ptr<Event_Base>& event) const;
};
#endif // Rule_MaChao_h__
