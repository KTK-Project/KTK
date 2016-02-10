#include "UI_Desktop.h"

using cocos2d::Vec2;
using std::string;

void UI_Desktop::init() {
	// TODO - implement UI_Desktop::init
	throw "Not yet implemented";
}

int UI_Desktop::pushBack(UI_Card* card) {
	// TODO - implement UI_Desktop::pushBack
	throw "Not yet implemented";
}

Vec2 UI_Desktop::getPositionForCard(int index) {
	// TODO - implement UI_Desktop::getPositionForCard
	throw "Not yet implemented";
}

void UI_Desktop::addCards(UI_Card* card, string& description) {
	// TODO - implement UI_Desktop::addCards
	throw "Not yet implemented";
}

void UI_Desktop::settleUp() {
	// TODO - implement UI_Desktop::settleUp
	throw "Not yet implemented";
}

bool UI_Desktop::getNeedToClean() {
	return this->m_needToClean;
}

void UI_Desktop::setNeedToClean(bool m_needToClean) {
	this->m_needToClean = m_needToClean;
}

void UI_Desktop::clean() {
	// TODO - implement UI_Desktop::clean
	throw "Not yet implemented";
}

void UI_Desktop::update(float delta) {
	// TODO - implement UI_Desktop::update
	throw "Not yet implemented";
}
