#ifndef Event_Hurt_h__
#define Event_Hurt_h__


class Event_Hurt : Event_Base {

private:
	Player* m_attacker;
	Player* m_goal;
	int m_demage;
	vector<Card*> m_cards;

public:
	Player* getM_attacker();

	void setM_attacker(Player* m_attacker);

	Player* getM_goal();

	void setM_goal(Player* m_goal);

	int getM_demage();

	void setM_demage(int m_demage);

	vector<Card*> getM_cards();

	void setM_cards(vector<Card*> m_cards);

	void eventResolve();
};
#endif // Event_Hurt_h__
