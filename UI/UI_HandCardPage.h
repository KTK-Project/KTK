#ifndef UI_HandCardPage_h__
#define UI_HandCardPage_h__

#include <vector>
#include "cocos2d.h"
#include "UI_Card.h"

class UI_HandCardPage : public cocos2d::Node {
public:
	static UI_HandCardPage * create() {
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
	std::vector<std::shared_ptr<UI_Card>> & getCards();
	int getSize() const;
	int getMaxSize() const;
	bool isEmpty() const;
	bool isFull() const;
	void setVisible(bool visible) override;
	void settleUp(bool useAction);
	cocos2d::Vec2 getPositionWithIndex(int index) const;
	bool hasCard(const std::shared_ptr<Card> & card) const;
	bool hasCard(const std::shared_ptr<UI_Card> & card) const;
	void addCard(const std::shared_ptr<Card> & card);
	void addCard(const std::shared_ptr<UI_Card> & card);
	std::shared_ptr<UI_Card> removeCard(const std::shared_ptr<Card> & card);
	std::shared_ptr<UI_Card> removeCard(const std::shared_ptr<UI_Card> & card);
	std::vector<std::shared_ptr<UI_Card>> removeAll();
	void setSettleUpFinishCallBack(const std::function<void()> & fun);
protected:
	UI_HandCardPage() = default;
private:
	const int m_maxSize = 7;
	std::vector<std::shared_ptr<UI_Card>> m_cards;
	std::function<void()> m_settleUpFinishCallBack;
};
#endif // UI_HandCardPage_h__
