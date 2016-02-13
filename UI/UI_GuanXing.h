#ifndef UI_GuanXing_h__
#define UI_GuanXing_h__

#include <vector>
#include "UI_Card.h"

class UI_GuanXing {

private:
	std::vector<UI_Card*> m_topCards;
	std::vector<UI_Card*> m_bottonCards;

public:
	bool initWithCards(const std::vector<std::shared_ptr<Card>>& topCards) const;

	std::vector<UI_Card*>& getTopCards() const;

	std::vector<UI_Card*>& getBottonCards() const;
};
#endif // UI_GuanXing_h__
