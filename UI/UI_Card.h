#ifndef UI_Card_h__
#define UI_Card_h__

#include "cocos2d.h"
#include "Card\Card.h"
#include <memory>

class UI_Card : public cocos2d::Node {

private:
	std::shared_ptr<Card> m_card;
	cocos2d::Sprite* m_cardPattern;
	cocos2d::Label* m_number;
	cocos2d::Label* m_suit;
	cocos2d::Label* m_description;
	bool m_dark;
	bool m_canUp;
	bool m_upping;
	std::function<void (UI_Card*)> m_upCallBack;
	std::function<void (UI_Card*)> m_downCallBack;
	cocos2d::EventListenerTouchOneByOne* m_listener;

public:
	UI_Card* create(std::shared_ptr<Card> card);

	bool initWithCard(std::shared_ptr<Card> card);

	void initListenToUpDown();

	std::shared_ptr<Card> getCard();

	void setCard(std::shared_ptr<Card> card);

	void setDescription(cocos2d::Label* m_description);

	bool getDark();

	void setDark(bool m_dark);

	bool getCanUp();

	void setCanUp(bool m_canUp);

	bool getUpping();

	void setUpping(bool m_upping);

	void setUpCallBack(std::function<void (UI_Card*)> m_upCallBack);

	void setDownCallBack(std::function<void (UI_Card*)> m_downCallBack);

	cocos2d::Action* runAction(cocos2d::Action* action);

	cocos2d::EventListenerTouchOneByOne* getListener();
};
#endif // UI_Card_h__
