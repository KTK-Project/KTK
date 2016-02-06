#ifndef UI_HandCardPage_h__
#define UI_HandCardPage_h__


class UI_HandCardPage {

private:
	vector<UI_Card*> m_cards;
	int s_maxSize;
	std::function<void ()> m_addCardFinishCallBack;

public:
	vector<UI_Card*>& getCards();

	int getSize();

	bool isEmpty();

	bool isFull();

	void settleUp(bool useAction);

	Vec2 getPositionWithIndex(int index);

	bool hasCard(Card* card);

	bool hasCard(UI_Card* card);

	void addCard(Card* card);

	void addCard(UI_Card* card);

	UI_Card* removeCard(Card* card);

	UI_Card* removeCard(UI_Card* card);

	vector<UI_Card*> removeAll();

	void setM_addCardFinishCallBack(std::function<void ()>& m_addCardFinishCallBack);
};
#endif // UI_HandCardPage_h__
