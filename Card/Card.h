#ifndef Card_h__
#define Card_h__


class Card {

private:
	Card_Name m_name;
	Card_Color m_color;
	Card_Suit m_suit;
	Card_Type m_type;

public:
	Card_Color getColor();

	Card_Name getName();

	Card_Suit getSuit();

	Card_Type getType();

	int getM_goalPlayerQuantity(Player* requester);

	vector<Player*> getCandidate(Player* playCardPlayer);

	void onUpping();

	void useCard(Player* playCardPlayer, vector<Player*>& goalPlayer);
};
#endif // Card_h__
