#ifndef UI_Card_h__
#define UI_Card_h__


class UI_Card {

private:
	Card* m_card;
	Sprite* m_cardPattern;
	Label* m_number;
	Label* m_suit;
	Label* m_description;
	bool m_dark;
	bool m_canUp;
	bool m_upping;
	std::function<void (UI_Card*)> m_upCallBack;
	std::function<void (UI_Card*)> m_downCallBack;
	EventListenerTouchOneByOne* m_listener;

public:
	UI_Card* create(Card* card);

	bool initWithCard(Card* card);

	void initListenToUpDown();

	Card* getCard();

	void setCard(Card* card);

	void setM_description(Label* m_description);

	bool getM_dark();

	void setM_dark(bool m_dark);

	bool getM_canUp();

	void setM_canUp(bool m_canUp);

	bool getM_upping();

	void setM_upping(bool m_upping);

	void setM_upCallBack(std::function<void (UI_Card*)> m_upCallBack);

	void setM_downCallBack(std::function<void (UI_Card*)> m_downCallBack);

	Action* runAction(Action* action);

	EventListenerTouchOneByOne* getM_listener();
};
#endif // UI_Card_h__
