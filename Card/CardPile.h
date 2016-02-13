#ifndef CardPile_h__
#define CardPile_h__

#include <memory>
#include <deque>
#include <functional>
#include "Card.h"

class CardPile {

private:
	std::deque<std::shared_ptr<Card>> m_cards;

public:
	CardPile() const;

	int getSize() const;

	bool isEmpty() const;

	std::shared_ptr<Card> popBack() const;

	std::shared_ptr<Card> popFront() const;

	void pushBack(const std::shared_ptr<Card> card) const;

	void pushFront(const std::shared_ptr<Card> card) const;

	int countCard(const std::function<bool (const std::shared_ptr<Card>)> filter) const;

	void shuffle() const;

	void sort() const;

	std::shared_ptr<Card> getCard(const std::shared_ptr<Card> card) const;

	std::vector<std::shared_ptr<Card>> getCards(const std::function<bool (const std::shared_ptr<Card>)>& filter) const;

	void addCard(const std::shared_ptr<Card> card) const;

	void addCards(const std::vector<std::shared_ptr<Card>>& cards) const;

	void removeCard(const std::shared_ptr<Card> card) const;

	void removeCards(const std::vector<std::shared_ptr<Card>>& cards) const;

	std::vector<std::shared_ptr<Card>> removeCards(const std::function<bool (const std::shared_ptr<Card>)>& filter) const;
};
#endif // CardPile_h__
