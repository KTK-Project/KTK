#ifndef UI_HandCardPage_h__
#define UI_HandCardPage_h__

#include <vector>
#include "cocos2d.h"
#include "UI_Card.h"

class UI_HandCardPage : public cocos2d::Node {
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
	std::vector<UI_Card*>& getCards() const;
	int getSize() const;
	bool isEmpty() const;
	bool isFull() const;
	void settleUp(const bool useAction) const;
	cocos2d::Vec2 getPositionWithIndex(const int index) const;
	bool hasCard(const std::shared_ptr<Card> card) const;
	bool hasCard(const UI_Card* card) const;
	void addCard(const std::shared_ptr<Card> card) const;
	void addCard(const UI_Card* card) const;
	UI_Card* removeCard(const std::shared_ptr<Card> card) const;
	UI_Card* removeCard(const UI_Card* card) const;
	std::vector<UI_Card*> removeAll() const;
	void setAddCardFinishCallBack(const std::function<void ()>& m_addCardFinishCallBack) const;
private:
	std::vector<UI_Card*> m_cards;
	int s_maxSize;
	std::function<void ()> m_addCardFinishCallBack;
};
#endif // UI_HandCardPage_h__
