#ifndef SkillList_h__
#define SkillList_h__

#include <vector>
#include "Skill.h"
#include "Manager\KTK_Enum.h"

class SkillList {

private:
	std::vector<Skill> m_skillList;

public:
	int getSize() const;

	Skill& getSkillByName(const Char_SkillName name) const;

	int getIndexByName(const Char_SkillName name) const;

	void addSkill(const Skill& skill) const;
};
#endif // SkillList_h__
