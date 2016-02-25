#ifndef UI_Card_h__
#define UI_Card_h__

#include "cocos2d.h"
#include "Card\Card.h"
#include <memory>

class UI_Card : public cocos2d::Node {
public:
	static UI_Card * create(const std::shared_ptr<Card> & card) {
		UI_Card  * pRet = new(std::nothrow) UI_Card ();
		if (pRet && pRet->initWithCard(card)) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool initWithCard(const std::shared_ptr<Card> card);
	void initListenToUpDown() const;
	const std::shared_ptr<Card> & getCard() const;
	void setCard(const std::shared_ptr<Card> & card);
	void setDescription(cocos2d::Label * description);
	bool getDark() const;
	void setDark(bool dark);
	bool getCanUp() const;
	void setCanUp(bool canUp);
	bool getUpping() const;
	void setUpping(bool upping);
	void setUpCallBack(const std::function<void (const UI_Card *)> & upCallBack);
	void setDownCallBack(const std::function<void (const UI_Card *)> & downCallBack);
	cocos2d::Action * runAction(const cocos2d::Action * action) const;
	cocos2d::EventListenerTouchOneByOne * getListener() const;
private:
	std::shared_ptr<Card> m_card;
	cocos2d::Sprite * m_cardPattern;
	cocos2d::Label * m_number;
	cocos2d::Sprite * m_suit;
	cocos2d::Label * m_description;
	bool m_dark;
	bool m_canUp;
	bool m_upping;
	std::function<void (const UI_Card *)> m_upCallBack;
	std::function<void (const UI_Card *)> m_downCallBack;
	cocos2d::EventListenerTouchOneByOne* m_listener;
};
#endif // UI_Card_h__
