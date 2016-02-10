#include "Skill.h"

Char_SkillName Skill::getName() {
	// TODO - implement Skill::getName
	throw "Not yet implemented";
}

bool Skill::isLordSkill() {
	// TODO - implement Skill::isLordSkill
	throw "Not yet implemented";
}

void Skill::setLordSkill(bool m_lordSkill) {
	this->m_lordSkill = m_lordSkill;
}

Skill_State Skill::getSkillState() {
	return this->m_skillState;
}

void Skill::setSkillState(Skill_State m_skillState) {
	this->m_skillState = m_skillState;
}
