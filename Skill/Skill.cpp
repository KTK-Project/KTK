#include "Skill.h"

Skill::Skill(ESkillName skillName, bool lordSkill, ESkillState skillState)
	:m_skillName(skillName),m_lordSkill(lordSkill),m_skillState(skillState){}

ESkillName Skill::getSkillName() const {
	return m_skillName;
}

bool Skill::isLordSkill() const {
	return m_lordSkill;
}

ESkillState Skill::getSkillState() const {
	return m_skillState;
}

void Skill::setSkillState(ESkillState skillState) {
	 m_skillState = skillState;
}
