#ifndef Player_h__
#define Player_h__

#include <vector>
#include "Rule\Character.h"
#include "Card\CardPile.h"
#include "Card\Card.h"
#include "Controller\Controller_Base.h"

class Rule_Character;
class UI_PlayerPanal;

class Player {

private:
	std::shared_ptr<Character> m_character;
	Char_ID m_ID;
	int m_HP;
	int m_maxHP;
	bool m_alive;
	int m_position;
	CardPile m_handCardPile;
	std::shared_ptr<Card> m_weapon;
	std::shared_ptr<Card> m_armor;
	std::shared_ptr<Card> m_defensiveHorse;
	std::shared_ptr<Card> m_offensiveHorse;
	std::vector<std::shared_ptr<Card>> m_judgeCards;
	std::vector<Char_ID> m_IDMarks;
	Controller_Base* m_controller;
	Rule_Character* m_rule;
	UI_PlayerPanal* m_playerPanal;

public:
	void init();

	std::shared_ptr<Character> getCharacter();

	void setCharacter(std::shared_ptr<Character> character);

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

	std::shared_ptr<Card> getWeapon();

	void setWeapon(std::shared_ptr<Card> weapon);

	std::shared_ptr<Card> getArmor();

	void setArmor(std::shared_ptr<Card> armor);

	std::shared_ptr<Card> getDefensiveHorse();

	void setDefensiveHorse(std::shared_ptr<Card> defensiveHorse);

	std::shared_ptr<Card> getOffensiveHorse();

	void setOffensiveHorse(std::shared_ptr<Card> offensiveHorse);

	std::vector<std::shared_ptr<Card>>& getJudgeCards();

	void addJudgeCard(std::shared_ptr<Card> card);

	Char_ID getIDMarks(std::shared_ptr<Player> player);

	void setIDMarks(std::shared_ptr<Player> player, Char_ID id);

	Controller_Base* getController();

	void setController(Controller_Base* controller);

	UI_PlayerPanal* getPlayerPanal();

	void setPlayerPanal(UI_PlayerPanal* playerPanal);
};
#endif // Player_h__
