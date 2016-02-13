#include "UI_TheftAndSabotage.h"

bool UI_TheftAndSabotage::initWithPlayer(const std::shared_ptr<Player> player, const Card_Name cardName) const {
	// TODO - implement UI_TheftAndSabotage::initWithPlayer
	throw "Not yet implemented";
}

std::shared_ptr<Card> UI_TheftAndSabotage::getSelectedCard() const {
	return this->m_selectedCard;
}

void UI_TheftAndSabotage::setSelectedCard(const std::shared_ptr<Card> m_selectedCard) const {
	this->m_selectedCard = m_selectedCard;
}
