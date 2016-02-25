#ifndef UI_HandCardPanal_h__
#define UI_HandCardPanal_h__

#include <deque>
#include <vector>
#include <functional>
#include "cocos2d.h"
#include "UI_HandCardPage.h"
#include "UI_Card.h"

class UI_HandCardPanal : public cocos2d::Node {
public:
	static UI_HandCardPage* create() {
		UI_HandCardPage * pRet = new(std::nothrow) UI_HandCardPage();
		if (pRet && pRet->init()) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool init();
	UI_HandCardPage* getPageByIndex(const int index) const;
	int getCurrentPageIndex() const;
	void setCurrentPageIndex(const int currentPageIndex) const;
	void pageUp() const;
	void pageDown() const;
	void addCard(const std::shared_ptr<Card> card) const;
	void addCard(const UI_Card* card) const;
	UI_Card* removeCard(const std::shared_ptr<Card> card) const;
	UI_Card* removeCard(const UI_Card* card) const;
	void removeEmptyPage() const;
	void reset() const;
	void for_each_card(const std::function<void (const UI_Card*)>& fun) const;
	void update(const float delta) const;
	void finish() const;
private:
	std::vector<UI_HandCardPage*> m_pages;
	std::deque<UI_Card*> m_addCardQueue;
	int m_currentPageIndex;
	cocos2d::Menu* m_pageUpDownMenu;
	std::function<bool(const std::shared_ptr<Card>)> m_cardsCanUpFilter;
	bool m_needToReset;
};
#endif // UI_HandCardPanal_h__
