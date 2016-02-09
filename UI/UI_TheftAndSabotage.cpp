#include "UI_TheftAndSabotage.h"

bool UI_TheftAndSabotage::initWithPlayer(std::shared_ptr<Player> player, Card_Name cardName) {
	// TODO - implement UI_TheftAndSabotage::initWithPlayer
	throw "Not yet implemented";
}

std::shared_ptr<Card> UI_TheftAndSabotage::getM_selectedCard() {
	return this->m_selectedCard;
}

void UI_TheftAndSabotage::setM_selectedCard(std::shared_ptr<Card> m_selectedCard) {
	this->m_selectedCard = m_selectedCard;
}
