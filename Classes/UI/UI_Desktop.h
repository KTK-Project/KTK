#ifndef UI_Desktop_h__
#define UI_Desktop_h__

#include <string>
#include <vector>
#include "cocos2d.h"
#include "UI_Card.h"

class UI_Desktop : public cocos2d::Node {
public:
	static UI_Desktop * create() {
		UI_Desktop * pRet = new(std::nothrow) UI_Desktop();
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
	bool init() const;
	int pushBack(const std::shared_ptr<UI_Card> & card);
	cocos2d::Vec2 getPositionForCard(const int index) const;
	void addCards(const std::shared_ptr<UI_Card> & card, const std::string & description);
	void settleUp();
	bool getNeedToClean() const;
	void setNeedToClean(bool needToClean);
	void clean() const;
	void update(float delta) override;
protected:
	UI_Desktop() = default;
private:
	std::vector<std::shared_ptr<UI_Card>> m_cards;
	bool m_needToClean;
	std::vector<std::shared_ptr<UI_Card>> m_cleanCards;
};
#endif // UI_Desktop_h__
