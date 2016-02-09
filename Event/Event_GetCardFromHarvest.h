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
	std::vector<std::shared_ptr<Card>> getM_cards();

	void setM_cards(std::vector<std::shared_ptr<Card>> m_cards);

	std::vector<std::shared_ptr<Player>> getM_players();

	void setM_players(std::vector<std::shared_ptr<Player>> m_players);

	std::shared_ptr<Card> getM_receiver();

	void setM_receiver(std::shared_ptr<Card> m_receiver);

	void eventResolve();
};
#endif // Event_GetCardFromHarvest_h__
