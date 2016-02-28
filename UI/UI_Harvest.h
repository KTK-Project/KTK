#ifndef UI_Harvest_h__
#define UI_Harvest_h__

#include <vector>
#include <memory>
#include "UI_Card.h"
#include "Player/Player.h"

class UI_Harvest : public cocos2d::Node {
public:
	static UI_Harvest * create(const std::vector<std::shared_ptr<Card>> & cards) {
		UI_Harvest * pRet = new(std::nothrow) UI_Harvest();
		if (pRet && pRet->initWithCards(cards)) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool initWithCards(const std::vector<std::shared_ptr<Card>> & cards);
	void chosedCard(const std::shared_ptr<Player> & player, const std::shared_ptr<Card> & card);
	void chosedCard(const std::shared_ptr<Player> & player, const UI_Card * card);
protected:
	UI_Harvest() = default;
private:
	std::vector<UI_Card *> m_cards;
	std::vector<std::shared_ptr<Player>> m_players;
};
#endif // UI_Harvest_h__
