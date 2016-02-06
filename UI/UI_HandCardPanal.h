#ifndef UI_HandCardPanal_h__
#define UI_HandCardPanal_h__


class UI_HandCardPanal {

private:
	vector<UI_HandCardPage*> m_pages;
	deque<UI_Card*> m_addCardQueue;
	int m_currentPageIndex;
	Menu* m_pageUpDownMenu;
	std::function<bool(Card*)> m_cardsCanUpFilter;
	bool m_needToReset;

public:
	UI_HandCardPage* getPageByIndex(int index);

	int getCurrentPageIndex();

	void setCurrentPageIndex(int currentPageIndex);

	void pageUp();

	void pageDown();

	void addCard(Card* card);

	void addCard(UI_Card* card);

	UI_Card* removeCard(Card* card);

	UI_Card* removeCard(UI_Card* card);

	void removeEmptyPage();

	void reset();

	void for_each_card(std::function<void (UI_Card*)>& fun);

	void update(float delta);

	void finish();
};
#endif // UI_HandCardPanal_h__
