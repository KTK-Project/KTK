#ifndef Event_Hurt_h__
#define Event_Hurt_h__

#include <vector>
#include "Event_Base.h"
#include "Player\Player.h"

class Event_Hurt : public Event_Base {

private:
	std::shared_ptr<Player> m_attacker;
	std::shared_ptr<Player> m_goal;
	int m_demage;
	std::vector<std::shared_ptr<Card>> m_cards;

public:
	std::shared_ptr<Player> getM_attacker();

	void setM_attacker(std::shared_ptr<Player> m_attacker);

	std::shared_ptr<Player> getM_goal();

	void setM_goal(std::shared_ptr<Player> m_goal);

	int getM_demage();

	void setM_demage(int m_demage);

	std::vector<std::shared_ptr<Card>> getM_cards();

	void setM_cards(std::vector<std::shared_ptr<Card>> m_cards);

	void eventResolve();
};
#endif // Event_Hurt_h__
