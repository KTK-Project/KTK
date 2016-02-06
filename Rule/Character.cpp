#include "Character.h"

Char_Force Character::getForce() {
	// TODO - implement Character::getForce
	throw "Not yet implemented";
}

Char_Name Character::getName() {
	// TODO - implement Character::getName
	throw "Not yet implemented";
}

Char_Sex Character::getSex() {
	// TODO - implement Character::getSex
	throw "Not yet implemented";
}

int Character::getHP() {
	// TODO - implement Character::getHP
	throw "Not yet implemented";
}

SkillList Character::getM_skillList() {
	return this->m_skillList;
}

void Character::setM_skillList(SkillList m_skillList) {
	this->m_skillList = m_skillList;
}
