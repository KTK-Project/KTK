#include "Skill.h"

//	Todo: stl
Skill::Skill(ESkillName skillName, bool lordSkill, ESkillState skillState /*= ESkillState::NONE*/) {
	throw "Not yet implemented";
}

//	Todo: stl
ESkillName Skill::getSkillName() const {
	// TODO - implement Skill::getName
	throw "Not yet implemented";
}

//	Todo: stl
bool Skill::isLordSkill() const {
	// TODO - implement Skill::isLordSkill
	throw "Not yet implemented";
}

//	Todo: stl
ESkillState Skill::getSkillState() const {
	return this->m_skillState;
}

//	Todo: stl
void Skill::setSkillState(ESkillState skillState) {
	throw "Not yet implemented";
}
