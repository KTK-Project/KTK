#ifndef SelectedCards_h__
#define SelectedCards_h__


class SelectedCards {

private:
	deque<UI_Card*> m_cards;
	int m_maxSelects;
	std::function<void ()> m_maxCallBack;
	std::function<void ()> m_unmaxCallBack;

public:
	deque<UI_Card*>& getCards();

	void addCard(UI_Card* card);

	void removeCard(UI_Card* card);

	void popFront();

	void popAll();

	bool hasCard(Card* card);

	bool hasCard(UI_Card* card);

	int getM_maxSelects();

	void setM_maxSelects(int m_maxSelects);

	void setM_maxCallBack(std::function<void ()> m_maxCallBack);

	void setM_unmaxCallBack(std::function<void ()> m_unmaxCallBack);
};
#endif // SelectedCards_h__
