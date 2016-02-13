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
	std::function<void (const UI_Card*)> m_upCallBack;
	std::function<void (const UI_Card*)> m_downCallBack;
	cocos2d::EventListenerTouchOneByOne* m_listener;

public:
	UI_Card* create(const std::shared_ptr<Card> card) const;

	bool initWithCard(const std::shared_ptr<Card> card) const;

	void initListenToUpDown() const;

	std::shared_ptr<Card> getCard() const;

	void setCard(const std::shared_ptr<Card> card) const;

	void setDescription(const cocos2d::Label* m_description) const;

	bool getDark() const;

	void setDark(const bool m_dark) const;

	bool getCanUp() const;

	void setCanUp(const bool m_canUp) const;

	bool getUpping() const;

	void setUpping(const bool m_upping) const;

	void setUpCallBack(const std::function<void (const UI_Card*)> m_upCallBack) const;

	void setDownCallBack(const std::function<void (const UI_Card*)> m_downCallBack) const;

	cocos2d::Action* runAction(const cocos2d::Action* action) const;

	cocos2d::EventListenerTouchOneByOne* getListener() const;
};
#endif // UI_Card_h__
