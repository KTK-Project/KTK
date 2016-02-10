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

SkillList Character::getSkillList() {
	return this->m_skillList;
}

void Character::setSkillList(SkillList m_skillList) {
	this->m_skillList = m_skillList;
}
