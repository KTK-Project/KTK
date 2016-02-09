#ifndef CardPile_h__
#define CardPile_h__

#include <memory>
#include <deque>
#include "Card.h"
#include <functional>

class CardPile {

private:
	std::deque<std::shared_ptr<Card>> m_cards;

public:
	CardPile();

	int getSize();

	bool isEmpty();

	std::shared_ptr<Card> popBack();

	std::shared_ptr<Card> popFront();

	void pushBack(std::shared_ptr<Card> card);

	void pushFront(std::shared_ptr<Card> card);

	int countCard(std::function<bool (std::shared_ptr<Card>)> filter);

	void shuffle();

	void sort();

	std::shared_ptr<Card> getCard(std::shared_ptr<Card> card);

	std::vector<std::shared_ptr<Card>> getCards(std::function<bool (std::shared_ptr<Card>)>& filter);

	void addCard(std::shared_ptr<Card> card);

	void addCards(std::vector<std::shared_ptr<Card>>& cards);

	void removeCard(std::shared_ptr<Card> card);

	void removeCards(std::vector<std::shared_ptr<Card>>& cards);

	std::vector<std::shared_ptr<Card>> removeCards(std::function<bool (std::shared_ptr<Card>)>& filter);
};
#endif // CardPile_h__
