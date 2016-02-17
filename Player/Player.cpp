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

//	Todo: stl
int Player::getPosition() const {
	// TODO - implement Player::getPosition
	throw "Not yet implemented";
}

//	Todo: stl
void Player::setPosition(int position) {
	// TODO - implement Player::setPosition
	throw "Not yet implemented";
}

//	Todo: stl
CardPile & Player::getHandCardPile() {
	// TODO - implement Player::getHandCardPile
	throw "Not yet implemented";
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

//	Todo: stl
const shared_ptr<Card> & Player::getWeapon() const {
	// TODO - implement Player::getWeapon
	throw "Not yet implemented";
}

//	Todo: stl
void Player::setWeapon(const shared_ptr<Card> & weapon) {
	// TODO - implement Player::setWeapon
	throw "Not yet implemented";
}

//	Todo: stl
const shared_ptr<Card> & Player::getArmor() const {
	// TODO - implement Player::getArmor
	throw "Not yet implemented";
}

//	Todo: stl
void Player::setArmor(const shared_ptr<Card> & armor) {
	// TODO - implement Player::setArmor
	throw "Not yet implemented";
}

//	Todo: stl
const shared_ptr<Card> & Player::getDefensiveHorse() const {
	// TODO - implement Player::getDefensiveHorse
	throw "Not yet implemented";
}

//	Todo: stl
void Player::setDefensiveHorse(const shared_ptr<Card> & defensiveHorse) {
	// TODO - implement Player::setDefensiveHorse
	throw "Not yet implemented";
}

//	Todo: stl
const shared_ptr<Card> & Player::getOffensiveHorse() const {
	// TODO - implement Player::getOffensiveHorse
	throw "Not yet implemented";
}

//	Todo: stl
void Player::setOffensiveHorse(const shared_ptr<Card> & offensiveHorse) {
	// TODO - implement Player::setOffensiveHorse
	throw "Not yet implemented";
}

//	Todo: stl
vector<shared_ptr<Card>> & Player::getJudgeCards() {
	throw "Not yet implemented";
}

ECharID Player::getIDMarks(const shared_ptr<Player> & player) const {
	return m_IDMarks[player->getPosition()];
}

void Player::setIDMarks(const shared_ptr<Player> & player, ECharID id) {
	m_IDMarks[player->getPosition()] = id;
}

//	Todo: stl
const shared_ptr<Rule_Base> & Player::getCharacterRule() const {
	throw "Not yet implemented";
}

//	Todo: stl
void Player::setCharacterRule(const shared_ptr<Rule_Base> & characterRule) {
	throw "Not yet implemented";
}

//	Todo: stl
const shared_ptr<Controller_Base> & Player::getController() const {
	// TODO - implement Player::getController
	throw "Not yet implemented";
}

//	Todo: stl
void Player::setController(shared_ptr<Controller_Base> & controller) {
	// TODO - implement Player::setController
	throw "Not yet implemented";
}

//	Todo: stl
const UI_PlayerPanal * Player::getPlayerPanal() const {
	// TODO - implement Player::getPlayerPanal
	throw "Not yet implemented";
}

//	Todo: stl
void Player::setPlayerPanal(const UI_PlayerPanal * playerPanal) {
	// TODO - implement Player::setPlayerPanal
	throw "Not yet implemented";
}
