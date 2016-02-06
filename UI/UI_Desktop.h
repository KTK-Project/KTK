#ifndef UI_Desktop_h__
#define UI_Desktop_h__


class UI_Desktop {

private:
	vector<UI_Card*> m_cards;
	bool m_needToClean;
	vector<UI_Card*> m_cleanCards;

public:
	void init();

	int pushBack(UI_Card* card);

	Vec2 getPositionForCard(int index);

	void addCards(UI_Card* card, std::string& description);

	void settleUp();

	bool getM_needToClean();

	void setM_needToClean(bool m_needToClean);

	void clean();

	void update(float delta);
};
#endif // UI_Desktop_h__
