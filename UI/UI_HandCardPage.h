#ifndef UI_HandCardPage_h__
#define UI_HandCardPage_h__

#include <vector>
#include "cocos2d.h"
#include "UI_Card.h"

class UI_HandCardPage {

private:
	std::vector<UI_Card*> m_cards;
	int s_maxSize;
	std::function<void ()> m_addCardFinishCallBack;

public:
	std::vector<UI_Card*>& getCards();

	int getSize();

	bool isEmpty();

	bool isFull();

	void settleUp(bool useAction);

	cocos2d::Vec2 getPositionWithIndex(int index);

	bool hasCard(std::shared_ptr<Card> card);

	bool hasCard(UI_Card* card);

	void addCard(std::shared_ptr<Card> card);

	void addCard(UI_Card* card);

	UI_Card* removeCard(std::shared_ptr<Card> card);

	UI_Card* removeCard(UI_Card* card);

	std::vector<UI_Card*> removeAll();

	void setM_addCardFinishCallBack(std::function<void ()>& m_addCardFinishCallBack);
};
#endif // UI_HandCardPage_h__
