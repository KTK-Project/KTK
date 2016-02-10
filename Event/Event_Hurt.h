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
	std::shared_ptr<Player> getAttacker();

	void setAttacker(std::shared_ptr<Player> m_attacker);

	std::shared_ptr<Player> getGoal();

	void setGoal(std::shared_ptr<Player> m_goal);

	int getDemage();

	void setDemage(int m_demage);

	std::vector<std::shared_ptr<Card>> getCards();

	void setCards(std::vector<std::shared_ptr<Card>> m_cards);

	void eventResolve();
};
#endif // Event_Hurt_h__
