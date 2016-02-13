#include "Character.h"

Char_Force Character::getForce() const {
	// TODO - implement Character::getForce
	throw "Not yet implemented";
}

Char_Name Character::getName() const {
	// TODO - implement Character::getName
	throw "Not yet implemented";
}

Char_Sex Character::getSex() const {
	// TODO - implement Character::getSex
	throw "Not yet implemented";
}

int Character::getHP() const {
	// TODO - implement Character::getHP
	throw "Not yet implemented";
}

SkillList Character::getSkillList() const {
	return this->m_skillList;
}

void Character::setSkillList(const SkillList m_skillList) const {
	this->m_skillList = m_skillList;
}
