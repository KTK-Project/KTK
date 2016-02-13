#ifndef Event_GetCardFromHarvest_h__
#define Event_GetCardFromHarvest_h__

#include <vector>
#include "Event_Interaction.h"
#include "Card\Card.h"
#include "Player\Player.h"

class Event_GetCardFromHarvest : public Event_Interaction {

private:
	std::vector<std::shared_ptr<Card>> m_cards;
	std::vector<std::shared_ptr<Player>> m_players;
	std::shared_ptr<Card> m_receiver;

public:
	std::vector<std::shared_ptr<Card>> getCards() const;

	void setCards(const std::vector<std::shared_ptr<Card>> m_cards) const;

	std::vector<std::shared_ptr<Player>> getPlayers() const;

	void setPlayers(const std::vector<std::shared_ptr<Player>> m_players) const;

	std::shared_ptr<Card> getReceiver() const;

	void setReceiver(const std::shared_ptr<Card> m_receiver) const;

	void eventResolve() const;
};
#endif // Event_GetCardFromHarvest_h__
