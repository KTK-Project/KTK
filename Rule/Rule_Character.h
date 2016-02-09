#ifndef Rule_Character_h__
#define Rule_Character_h__

#include "Player/Player.h"
#include "Manager/KTK_Enum.h"
#include "Card/Card.h"
#include "Event/Event_Base.h"

class Rule_Character {

private:
	std::shared_ptr<Player> m_player;

public:
	Rule_Character(std::shared_ptr<Player> player);

	std::shared_ptr<Player> getPlayer();

	void setPlayer(std::shared_ptr<Player> player);

	void readyStage();

	void judgeStage();

	void drawCardStage();

	void playCardStage();

	void discardStage();

	void roundEndStage();

	bool canAsCandidate(Card_Name cardName);

	void asCardGoal(Card_Name cardName);

	void equip(std::shared_ptr<Card> card);

	void unequip(std::shared_ptr<Card> card);

	void playCard(std::shared_ptr<Card> card);

	void drawCard(std::shared_ptr<Card> card);

	std::shared_ptr<Card> removeHandCard(std::shared_ptr<Card> card);

	int getDistanceForCard(std::shared_ptr<Card> card);

	int getDistance(std::shared_ptr<Player> player);

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void afterProcessEvent(std::shared_ptr<Event_Base>& event);
};
#endif // Rule_Character_h__
