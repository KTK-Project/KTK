#ifndef UI_GuanXing_h__
#define UI_GuanXing_h__

#include <vector>
#include "UI_Card.h"

class UI_GuanXing {

private:
	std::vector<UI_Card*> m_topCards;
	std::vector<UI_Card*> m_bottonCards;

public:
	bool initWithCards(std::vector<std::shared_ptr<Card>>& topCards);

	std::vector<UI_Card*>& getTopCards();

	std::vector<UI_Card*>& getBottonCards();
};
#endif // UI_GuanXing_h__
