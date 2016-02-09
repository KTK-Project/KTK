#ifndef CardPile_h__
#define CardPile_h__


class CardPile {

private:
	deque<Card*> m_cards;

public:
	CardPile();

	int getSize();

	bool isEmpty();

	Card* popBack();

	Card* popFront();

	void pushBack(Card* card);

	void pushFront(Card* card);

	int countCard(std::function<bool (Card*)> filter);

	void shuffle();

	void sort();

	Card* getCard(Card* card);

	vector<Card*> getCards(std::function<bool (Card*)>& filter);

	void addCard(Card* card);

	void addCards(vector<Card*>& cards);

	void removeCard(Card* card);

	void removeCards(vector<Card*>& cards);

	vector<Card*> removeCards(std::function<bool (Card*)>& filter);
};
#endif // CardPile_h__
