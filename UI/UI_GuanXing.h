#ifndef UI_GuanXing_h__
#define UI_GuanXing_h__


class UI_GuanXing {

private:
	vector<UI_Card*> m_topCards;
	vector<UI_Card*> m_bottonCards;

public:
	bool initWithCards(vector<Card*>& topCards);

	vector<UI_Card*>& getM_topCards();

	vector<UI_Card*>& getM_bottonCards();
};
#endif // UI_GuanXing_h__
