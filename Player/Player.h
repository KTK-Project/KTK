#ifndef Player_h__
#define Player_h__

#include <vector>
#include "Rule\Character.h"
#include "Card\CardPile.h"
#include "Card\Card.h"
#include "Controller\Controller_Base.h"

class Rule_Base;
class UI_PlayerPanal;

class Player {
public:
	Player();

	//基本属性设置
	const Character & getCharacter() const;
	void setCharacter(const Character & character);
	ECharID getID() const;
	void setID(ECharID ID);
	int getHP() const;
	void setHP(int HP);
	int getMaxHP() const;
	void setMaxHP(int maxHP);
	bool isAlive() const;
	void setAlive(bool alive);
	int getPosition() const;
	void setPosition(int position);
	CardPile & getHandCardPile();

	// 额外属性判断
	bool isForwardPlayer() const;
	bool isLordPlayer() const;
	bool isCurrentPlayer() const;

	// 装备区
	const std::shared_ptr<Card> & getWeapon() const;
	void setWeapon(const std::shared_ptr<Card> & weapon);
	const std::shared_ptr<Card> & getArmor() const;
	void setArmor(const std::shared_ptr<Card> & armor);
	const std::shared_ptr<Card> & getDefensiveHorse() const;
	void setDefensiveHorse(const std::shared_ptr<Card> & defensiveHorse);
	const std::shared_ptr<Card> & getOffensiveHorse() const;
	void setOffensiveHorse(const std::shared_ptr<Card> & offensiveHorse);

	// 判定区
	std::vector<std::shared_ptr<Card>> & getJudgeCards();

	// player身份标记
	ECharID getIDMarks(const std::shared_ptr<Player> & player) const;
	void setIDMarks(const std::shared_ptr<Player> & player, ECharID id);

	// 角色规则
	const std::shared_ptr<Rule_Base> & getCharacterRule() const;
	void setCharacterRule(const std::shared_ptr<Rule_Base> & characterRule);

	// AI控制器
	const std::shared_ptr<Controller_Base> & getController() const;
	void setController(std::shared_ptr<Controller_Base> & controller);

	// 对应UI
	const UI_PlayerPanal * getPlayerPanal() const;
	void setPlayerPanal(const UI_PlayerPanal * playerPanal);

private:
	// 属性
	Character m_character;
	ECharID m_ID;
	int m_HP;
	int m_maxHP;
	bool m_alive;
	int m_position;
	CardPile m_handCardPile;

	// 装备区
	std::shared_ptr<Card> m_weapon;
	std::shared_ptr<Card> m_armor;
	std::shared_ptr<Card> m_defensiveHorse;
	std::shared_ptr<Card> m_offensiveHorse;

	// 判定区
	std::vector<std::shared_ptr<Card>> m_judgeCards;
	// player身份标记
	std::vector<ECharID> m_IDMarks;
	// 角色规则
	std::shared_ptr<Rule_Base> m_characterRule;
	// AI控制器
	std::shared_ptr<Controller_Base> m_controller;
	// 对应UI
	UI_PlayerPanal* m_playerPanal;
};

#endif // Player_h__
