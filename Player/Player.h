#ifndef Player_h__
#define Player_h__


class Player {

private:
	Character* m_character;
	Char_ID m_ID;
	int m_HP;
	int m_maxHP;
	bool m_alive;
	int m_position;
	CardPile m_handCardPile;
	Card* m_weapon;
	Card* m_armor;
	Card* m_defensiveHorse;
	Card* m_offensiveHorse;
	vector<Card*> m_judgeCards;
	vector<Char_ID> m_IDMarks;
	Controller_Base* m_controller;
	Rule_Character* m_rule;
	UI_PlayerPanal* m_playerPanal;

public:
	void init();

	Character* getCharacter();

	void setCharacter(Character* character);

	Char_ID getID();

	void setID(Char_ID ID);

	int getHP();

	void setHP(int HP);

	int getMaxHP();

	void setMaxHP(int maxHP);

	bool isAlive();

	void setAlive(bool alive);

	int getPosition();

	void setPosition(int position);

	CardPile& getHandCardPile();

	Card* getWeapon();

	void setWeapon(Card* weapon);

	Card* getArmor();

	void setArmor(Card* armor);

	Card* getDefensiveHorse();

	void setDefensiveHorse(Card* defensiveHorse);

	Card* getOffensiveHorse();

	void setOffensiveHorse(Card* offensiveHorse);

	vector<Card*>& getJudgeCards();

	void addJudgeCard(Card* card);

	Char_ID getIDMarks(Player* player);

	void setIDMarks(Player* player, Char_ID id);

	Controller_Base* getController();

	void setController(Controller_Base* controller);

	UI_PlayerPanal* getPlayerPanal();

	void setPlayerPanal(UI_PlayerPanal* playerPanal);
};
#endif // Player_h__
