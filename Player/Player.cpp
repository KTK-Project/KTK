#include "Player.h"
#include <memory>
#include <vector>
#include "Manager\GameManager.h"

using std::shared_ptr;
using std::vector;

Player::Player() {
	m_ID = ECharID::NONE;
	m_HP = 0;
	m_maxHP = 0;
	m_alive = false;
	m_position = 0;
	m_playerPanal = nullptr;
}

const Character & Player::getCharacter() const {
	return m_character;
}

void Player::setCharacter(const Character & character) {
	m_character = character;
}

ECharID Player::getID() const {
	return m_ID;
}

void Player::setID(ECharID ID) {
	m_ID = ID;
}

int Player::getHP() const {
	return m_HP;
}

void Player::setHP(int HP) {
	m_HP = HP;
}

int Player::getMaxHP() const {
	return m_maxHP;
}

void Player::setMaxHP(int maxHP) {
	m_maxHP = maxHP;
}

bool Player::isAlive() const {
	return m_alive;
}

void Player::setAlive(bool alive) {
	m_alive = alive;
}

int Player::getPosition() const {
	return m_position;
}

void Player::setPosition(int position) {
	m_position = position;
}

CardPile & Player::getHandCardPile() {
	return m_handCardPile;
}

bool Player::isForwardPlayer() const {
	return GameManager::getInstance()->getPlayerManager().getForwardPlayer().get() == this;
}

bool Player::isLordPlayer() const {
	return GameManager::getInstance()->getPlayerManager().getLordPlayer().get() == this;
}

bool Player::isCurrentPlayer() const {
	return GameManager::getInstance()->getPlayerManager().getCurrentPlayer().get() == this;
}

const shared_ptr<Card> & Player::getWeapon() const {
	return m_weapon;
}

void Player::setWeapon(const shared_ptr<Card> & weapon) {
	m_weapon = weapon;
}

const shared_ptr<Card> & Player::getArmor() const {
	return m_armor;
}

void Player::setArmor(const shared_ptr<Card> & armor) {
	m_armor = armor;
}

const shared_ptr<Card> & Player::getDefensiveHorse() const {
	return m_defensiveHorse;
}

void Player::setDefensiveHorse(const shared_ptr<Card> & defensiveHorse) {
	m_defensiveHorse=defensiveHorse;
}

const shared_ptr<Card> & Player::getOffensiveHorse() const {
	return m_offensiveHorse;
}

void Player::setOffensiveHorse(const shared_ptr<Card> & offensiveHorse) {
	m_offensiveHorse = offensiveHorse;
}

vector<shared_ptr<Card>> & Player::getJudgeCards() {
	return m_judgeCards;
}

ECharID Player::getIDMarks(const shared_ptr<Player> & player) const {
	return m_IDMarks[player->getPosition()];
}

void Player::setIDMarks(const shared_ptr<Player> & player, ECharID id) {
	m_IDMarks[player->getPosition()] = id;
}

const shared_ptr<Rule_Base> & Player::getCharacterRule() const {
	return m_characterRule;
}

void Player::setCharacterRule(const shared_ptr<Rule_Base> & characterRule) {
	m_characterRule = characterRule;
}

const shared_ptr<Controller_Base> & Player::getController() const {
	return m_controller;
}

void Player::setController(shared_ptr<Controller_Base> & controller) {
	m_controller = controller;
}

const UI_PlayerPanal * Player::getPlayerPanal() const {
	return m_playerPanal;
}

void Player::setPlayerPanal(UI_PlayerPanal * playerPanal) {
	m_playerPanal = playerPanal;
}
