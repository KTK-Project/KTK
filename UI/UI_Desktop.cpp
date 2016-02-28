#include "UI_Desktop.h"

using cocos2d::Vec2;
using std::string;

bool UI_Desktop::init() const {
	// TODO - implement UI_Desktop::init
	throw "Not yet implemented";
}

int UI_Desktop::pushBack(const UI_Card * card) {
	//直接压入cards中，并返回cards.size()
	// TODO - implement UI_Desktop::pushBack
	throw "Not yet implemented";
}

Vec2 UI_Desktop::getPositionForCard(const int index) const {
	//获取cards的size来计算index的坐标，并返回
	// TODO - implement UI_Desktop::getPositionForCard
	throw "Not yet implemented";
}

void UI_Desktop::addCards(const UI_Card * card, const std::string & description) {
	//把设置卡牌的description，然后push进cards，调用settleup
	// TODO - implement UI_Desktop::addCards
	throw "Not yet implemented";
}

void UI_Desktop::settleUp() {
	//为每一个UI_card * 设置一个到正确位置的移动动作
	// TODO - implement UI_Desktop::settleUp
	throw "Not yet implemented";
}

bool UI_Desktop::getNeedToClean() const {
	return this->m_needToClean;
}

void UI_Desktop::setNeedToClean(bool needToClean) {
	throw "Not yet implemented";
}

void UI_Desktop::clean() const {
	//设置needtoclean为false，把所有卡牌移动到cleanCards，设置隐去动作，动作结束自动执行removechild
	// TODO - implement UI_Desktop::clean
	throw "Not yet implemented";
}

void UI_Desktop::update(float delta) {
	//if         m_needtocleans = false		return;
//if     （有卡牌在执行动作）	 return;
//clean
	// TODO - implement UI_Desktop::update
	throw "Not yet implemented";
}
