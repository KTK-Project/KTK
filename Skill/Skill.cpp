#include "Skill.h"

ESkillName Skill::getName() const {
	// TODO - implement Skill::getName
	throw "Not yet implemented";
}

bool Skill::isLordSkill() const {
	// TODO - implement Skill::isLordSkill
	throw "Not yet implemented";
}

void Skill::setLordSkill(const bool lordSkill) const {
	this->m_lordSkill = lordSkill;
}

ESkillState Skill::getSkillState() const {
	return this->m_skillState;
}

void Skill::setSkillState(const ESkillState m_skillState) const {
	this->m_skillState = m_skillState;
}
