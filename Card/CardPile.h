#ifndef CardPile_h__
#define CardPile_h__

#include <memory>
#include <deque>
#include <functional>
#include "Card.h"

class CardPile {
public:
	int getSize() const;
	bool isEmpty() const;
	std::shared_ptr<Card> popBack();
	std::shared_ptr<Card> popFront();
	void pushBack(const std::shared_ptr<Card> & card);
	void pushFront(const std::shared_ptr<Card> & card);
	int countCard(const std::function<bool (const std::shared_ptr<Card> &)> & filter) const;
	void shuffle();
	void sort();
	std::deque<std::shared_ptr<Card>> & getCards();
	std::vector<std::shared_ptr<Card>> getCards(const std::function<bool (const std::shared_ptr<Card> &)> & filter) const;
	void removeCard(const std::shared_ptr<Card> & card);
	void removeCards(const std::vector<std::shared_ptr<Card>> & cards);
	std::vector<std::shared_ptr<Card>> removeCards(const std::function<bool (const std::shared_ptr<Card> &)> & filter);
	std::vector<std::shared_ptr<Card>> clear();

private:
	std::deque<std::shared_ptr<Card>> m_cards;
};
#endif // CardPile_h__
