#ifndef Event_GetCardFromHarvest_h__
#define Event_GetCardFromHarvest_h__


class Event_GetCardFromHarvest : Event_Interaction {

private:
	vector<Card*> m_cards;
	vector<Player*> m_players;
	Card* m_receiver;

public:
	vector<Card*> getM_cards();

	void setM_cards(vector<Card*> m_cards);

	vector<Player*> getM_players();

	void setM_players(vector<Player*> m_players);

	Card* getM_receiver();

	void setM_receiver(Card* m_receiver);

	void eventResolve();
};
#endif // Event_GetCardFromHarvest_h__
