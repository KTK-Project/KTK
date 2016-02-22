#include "CardPile.h"
#include <algorithm>

using std::shared_ptr;
using std::function;
using std::vector;

int CardPile::getSize() const {
	return m_cards.size();
}

bool CardPile::isEmpty() const {
	return m_cards.empty();
}

shared_ptr<Card> CardPile::popBack() {
	auto card = m_cards.back();
	m_cards.pop_back();
	return card;
}

shared_ptr<Card> CardPile::popFront() {
	auto card = m_cards.front();
	m_cards.pop_front();
	return card;
}

void CardPile::pushBack(const shared_ptr<Card> & card) {
	m_cards.push_back(card);
}

void CardPile::pushFront(const shared_ptr<Card> & card) {
	m_cards.push_front(card);
}

int CardPile::countCard(const function<bool(const shared_ptr<Card> &)> & filter) const {
	int count = 0;
	for (auto & card : m_cards)
		if (filter(card))
			count++;
	return count;
}

void CardPile::shuffle() {
//	Todo: stm
	// TODO - implement CardPile::shuffle
	throw "Not yet implemented";
}

// !!!
void CardPile::sort() {
	std::sort(m_cards.begin(), m_cards.end(), [](const shared_ptr<Card> & c1, const shared_ptr<Card> & c2) {
		return c1->getName() < c2->getName();
	});
}

vector<shared_ptr<Card>> CardPile::getCards(const function<bool(const shared_ptr<Card> &)> & filter) const {
	vector<shared_ptr<Card>> v;
	for (auto & card : m_cards)
		if (filter(card))
			v.push_back(card);
	return v;
}

void CardPile::removeCard(const shared_ptr<Card> & card) {
	auto iterator = std::find(m_cards.cbegin(), m_cards.cend(), card);
	if (iterator != m_cards.cend())
		m_cards.erase(iterator);
	else
		throw "Can't find card!";
}

void CardPile::removeCards(const vector<shared_ptr<Card>> & cards) {
	for (auto & card : cards)
		removeCard(card);
}

vector<shared_ptr<Card>> CardPile::removeCards(const function<bool(const shared_ptr<Card> &)> & filter) {
	vector<shared_ptr<Card>> v;
	for (auto & card : m_cards)
		if (filter(card)) {
			removeCard(card);
			v.push_back(card);
		}
	return v;
}

vector<shared_ptr<Card>> CardPile::clear() {
	removeCards([](const shared_ptr<Card> & card) { return true; });
}
