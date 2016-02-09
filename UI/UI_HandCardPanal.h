#ifndef UI_HandCardPanal_h__
#define UI_HandCardPanal_h__

#include <deque>
#include <vector>
#include <functional>
#include "cocos2d.h"
#include "UI_HandCardPage.h"
#include "UI_Card.h"

class UI_HandCardPanal {

private:
	std::vector<UI_HandCardPage*> m_pages;
	std::deque<UI_Card*> m_addCardQueue;
	int m_currentPageIndex;
	cocos2d::Menu* m_pageUpDownMenu;
	std::function<bool(std::shared_ptr<Card>)> m_cardsCanUpFilter;
	bool m_needToReset;
public:
	UI_HandCardPage* getPageByIndex(int index);

	int getCurrentPageIndex();

	void setCurrentPageIndex(int currentPageIndex);

	void pageUp();

	void pageDown();

	void addCard(std::shared_ptr<Card> card);

	void addCard(UI_Card* card);

	UI_Card* removeCard(std::shared_ptr<Card> card);

	UI_Card* removeCard(UI_Card* card);

	void removeEmptyPage();

	void reset();

	void for_each_card(std::function<void (UI_Card*)>& fun);

	void update(float delta);

	void finish();
};
#endif // UI_HandCardPanal_h__
