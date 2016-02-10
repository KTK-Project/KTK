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
	void init();

	int pushBack(UI_Card* card);

	cocos2d::Vec2 getPositionForCard(int index);

	void addCards(UI_Card* card, std::string& description);

	void settleUp();

	bool getNeedToClean();

	void setNeedToClean(bool m_needToClean);

	void clean();

	void update(float delta);
};
#endif // UI_Desktop_h__
