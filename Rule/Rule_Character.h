#ifndef Rule_Character_h__
#define Rule_Character_h__


class Rule_Character {

private:
	Player* m_player;

public:
	Rule_Character(Player* player);

	Player* getPlayer();

	void setPlayer(Player* player);

	void readyStage();

	void judgeStage();

	void drawCardStage();

	void playCardStage();

	void discardStage();

	void roundEndStage();

	bool canAsCandidate(Card_Name cardName);

	void asCardGoal(Card_Name cardName);

	void equip(Card* card);

	void unequip(Card* card);

	void playCard(Card* card);

	void drawCard(Card* card);

	Card* removeHandCard(Card* card);

	int getDistanceForCard(Card* card);

	int getDistance(Player* player);

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void afterProcessEvent(std::shared_ptr<Event_Base>& event);
};
#endif // Rule_Character_h__
