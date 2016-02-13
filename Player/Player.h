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
	std::shared_ptr<Controller_Base> m_controller;
	std::shared_ptr<Rule_Character> m_rule;
	UI_PlayerPanal* m_playerPanal;

public:
	void init() const;

	std::shared_ptr<Character> getCharacter() const;

	void setCharacter(const std::shared_ptr<Character> character) const;

	Char_ID getID() const;

	void setID(const Char_ID ID) const;

	int getHP() const;

	void setHP(const int HP) const;

	int getMaxHP() const;

	void setMaxHP(const int maxHP) const;

	bool isAlive() const;

	void setAlive(const bool alive) const;

	int getPosition() const;

	void setPosition(const int position) const;

	CardPile& getHandCardPile() const;

	std::shared_ptr<Card> getWeapon() const;

	void setWeapon(const std::shared_ptr<Card> weapon) const;

	std::shared_ptr<Card> getArmor() const;

	void setArmor(const std::shared_ptr<Card> armor) const;

	std::shared_ptr<Card> getDefensiveHorse() const;

	void setDefensiveHorse(const std::shared_ptr<Card> defensiveHorse) const;

	std::shared_ptr<Card> getOffensiveHorse() const;

	void setOffensiveHorse(const std::shared_ptr<Card> offensiveHorse) const;

	std::vector<std::shared_ptr<Card>>& getJudgeCards() const;

	void addJudgeCard(const std::shared_ptr<Card> card) const;

	Char_ID getIDMarks(const std::shared_ptr<Player> player) const;

	void setIDMarks(const std::shared_ptr<Player> player, const Char_ID id) const;

	std::shared_ptr<Controller_Base> getController() const;

	void setController(const std::shared_ptr<Controller_Base> controller) const;

	UI_PlayerPanal* getPlayerPanal() const;

	void setPlayerPanal(const UI_PlayerPanal* playerPanal) const;
};
#endif // Player_h__
