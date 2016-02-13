#include "Skill.h"

Char_SkillName Skill::getName() const {
	// TODO - implement Skill::getName
	throw "Not yet implemented";
}

bool Skill::isLordSkill() const {
	// TODO - implement Skill::isLordSkill
	throw "Not yet implemented";
}

void Skill::setLordSkill(const bool m_lordSkill) const {
	this->m_lordSkill = m_lordSkill;
}

Skill_State Skill::getSkillState() const {
	return this->m_skillState;
}

void Skill::setSkillState(const Skill_State m_skillState) const {
	this->m_skillState = m_skillState;
}
