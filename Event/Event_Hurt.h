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
	std::shared_ptr<Player> getAttacker() const;

	void setAttacker(const std::shared_ptr<Player> m_attacker) const;

	std::shared_ptr<Player> getGoal() const;

	void setGoal(const std::shared_ptr<Player> m_goal) const;

	int getDemage() const;

	void setDemage(const int m_demage) const;

	std::vector<std::shared_ptr<Card>> getCards() const;

	void setCards(const std::vector<std::shared_ptr<Card>> m_cards) const;

	void eventResolve() const;
};
#endif // Event_Hurt_h__
