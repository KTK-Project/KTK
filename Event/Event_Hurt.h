#ifndef Event_Hurt_h__
#define Event_Hurt_h__

#include <vector>
#include "Event_Base.h"
#include "Player\Player.h"

class Event_Hurt : public Event_Base {
public:
	std::shared_ptr<Player> getAttacker() const;
	void setAttacker(const std::shared_ptr<Player> & attacker);
	std::shared_ptr<Player> getGoal() const;
	void setGoal(const std::shared_ptr<Player> & goal);
	int getDemage() const;
	void setDemage(int demage);
	std::vector<std::shared_ptr<Card>> & getCards();
	void eventResolve() const;
private:
	std::weak_ptr<Player> m_attacker;
	std::weak_ptr<Player> m_goal;
	int m_demage;
	std::vector<std::shared_ptr<Card>> m_cards;
};
#endif // Event_Hurt_h__
