#include "SkillList.h"

int SkillList::getSize() const {
	return m_skills.size();
}

Skill & SkillList::getSkillByName(ESkillName name) {
	for (auto & skill : m_skills)
		if (skill.getSkillName() == name)
			return skill;
	throw "Can't find skill!";
}

Skill & SkillList::getSkillByIndex(int index) {
	return m_skills[index];
}

void SkillList::addSkill(const Skill & skill) {
	m_skills.push_back(skill);
}
