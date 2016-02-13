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
	Rule_Character(const std::shared_ptr<Player> player) const;

	std::shared_ptr<Player> getPlayer() const;

	void setPlayer(const std::shared_ptr<Player> player) const;

	void readyStage() const;

	void judgeStage() const;

	void drawCardStage() const;

	void playCardStage() const;

	void discardStage() const;

	void roundEndStage() const;

	bool canAsCandidate(const ECardName cardName) const;

	void asCardGoal(const ECardName cardName) const;

	void equip(const std::shared_ptr<Card> card) const;

	void unequip(const std::shared_ptr<Card> card) const;

	void playCard(const std::shared_ptr<Card> card) const;

	void drawCard(const std::shared_ptr<Card> card) const;

	std::shared_ptr<Card> removeHandCard(const std::shared_ptr<Card> card) const;

	int getDistanceForCard(const std::shared_ptr<Card> card) const;

	int getDistance(const std::shared_ptr<Player> player) const;

	void beforeProcessEvent(const std::shared_ptr<Event_Base>& event) const;

	void afterProcessEvent(const std::shared_ptr<Event_Base>& event) const;
};
#endif // Rule_Character_h__
