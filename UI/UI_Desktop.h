#ifndef UI_Desktop_h__
#define UI_Desktop_h__

#include <string>
#include <vector>
#include "cocos2d.h"
#include "UI_Card.h"

class UI_Desktop {

private:
	std::vector<UI_Card*> m_cards;
	bool m_needToClean;
	std::vector<UI_Card*> m_cleanCards;

public:
	void init() const;

	int pushBack(const UI_Card* card) const;

	cocos2d::Vec2 getPositionForCard(const int index) const;

	void addCards(const UI_Card* card, const std::string& description) const;

	void settleUp() const;

	bool getNeedToClean() const;

	void setNeedToClean(const bool m_needToClean) const;

	void clean() const;

	void update(const float delta) const;
};
#endif // UI_Desktop_h__
