#include "Character.h"

Character::Character(ECharName name /*= ECharName::NONE*/) { 
	init(name);
}

//	Todo: stl !!!
void Character::init(ECharName name) {
}

//	Todo: stl
ECharName Character::getName() const {
	// TODO - implement Character::getName
	throw "Not yet implemented";
}

//	Todo: stl
ECharForce Character::getForce() const {
	// TODO - implement Character::getForce
	throw "Not yet implemented";
}

//	Todo: stl
ECharSex Character::getSex() const {
	// TODO - implement Character::getSex
	throw "Not yet implemented";
}

//	Todo: stl
int Character::getHP() const {
	// TODO - implement Character::getHP
	throw "Not yet implemented";
}

//	Todo: stl
const SkillList & Character::getSkillList() const {
	return this->m_skillList;
}

//	Todo: stl
void Character::setSkillList(const SkillList & skillList) {
	throw "Not yet implemented";
}
