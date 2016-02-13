#include "UI_Desktop.h"

using cocos2d::Vec2;
using std::string;

void UI_Desktop::init() const {
	// TODO - implement UI_Desktop::init
	throw "Not yet implemented";
}

int UI_Desktop::pushBack(const UI_Card* card) const {
	// TODO - implement UI_Desktop::pushBack
	throw "Not yet implemented";
}

Vec2 UI_Desktop::getPositionForCard(const int index) const {
	// TODO - implement UI_Desktop::getPositionForCard
	throw "Not yet implemented";
}

void UI_Desktop::addCards(const UI_Card* card, const string& description) const {
	// TODO - implement UI_Desktop::addCards
	throw "Not yet implemented";
}

void UI_Desktop::settleUp() const {
	// TODO - implement UI_Desktop::settleUp
	throw "Not yet implemented";
}

bool UI_Desktop::getNeedToClean() const {
	return this->m_needToClean;
}

void UI_Desktop::setNeedToClean(const bool m_needToClean) const {
	this->m_needToClean = m_needToClean;
}

void UI_Desktop::clean() const {
	// TODO - implement UI_Desktop::clean
	throw "Not yet implemented";
}

void UI_Desktop::update(const float delta) const {
	// TODO - implement UI_Desktop::update
	throw "Not yet implemented";
}
