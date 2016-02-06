#include "Skill.h"

Char_SkillName Skill::getName() {
	// TODO - implement Skill::getName
	throw "Not yet implemented";
}

bool Skill::isLordSkill() {
	// TODO - implement Skill::isLordSkill
	throw "Not yet implemented";
}

void Skill::setM_lordSkill(bool m_lordSkill) {
	this->m_lordSkill = m_lordSkill;
}

Skill_State Skill::getM_skillState() {
	return this->m_skillState;
}

void Skill::setM_skillState(Skill_State m_skillState) {
	this->m_skillState = m_skillState;
}
