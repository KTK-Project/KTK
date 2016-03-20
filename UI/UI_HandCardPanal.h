#ifndef UI_HandCardPanal_h__
#define UI_HandCardPanal_h__

#include <deque>
#include <vector>
#include <functional>
#include "cocos2d.h"
#include "ui\CocosGUI.h"
#include "UI_HandCardPage.h"
#include "UI_Card.h"

class UI_HandCardPanal : public cocos2d::Node {
public:
	static UI_HandCardPanal * create() {
		UI_HandCardPanal * pRet = new(std::nothrow) UI_HandCardPanal();
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
	UI_HandCardPage * getPageByIndex(int index) const;
	UI_HandCardPage * getCurrentPage() const;
	void setCurrentPage(int index);
	void pageUp();
	void pageDown();
	std::shared_ptr<UI_Card> addCard(const std::shared_ptr<Card> & card);
	void addCard(const std::shared_ptr<UI_Card> & card);
	std::shared_ptr<UI_Card> removeCard(const std::shared_ptr<Card> & card);
	std::shared_ptr<UI_Card> removeCard(const std::shared_ptr<UI_Card> & card);
	void removeEmptyPage();
	void reset();
	void for_each_card(const std::function<void (const std::shared_ptr<UI_Card> &)> & fun) const;
	void update(float delta) override;
//	Todo:stm delete or not
// 	void finish() const;
protected:
	UI_HandCardPanal() = default;
private:
	std::vector<UI_HandCardPage *> m_pages;
	std::deque<std::shared_ptr<UI_Card>> m_addCardQueue;
	cocos2d::ui::Button * m_upButton;
	cocos2d::ui::Button * m_downButton;
	cocos2d::Label * m_pageLabel;
	std::function<bool(const std::shared_ptr<Card>)> m_cardsCanUpFilter;
	int m_currentPageIndex;
	bool m_needToReset;
};
#endif // UI_HandCardPanal_h__
