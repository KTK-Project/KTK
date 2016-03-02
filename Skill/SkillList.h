#ifndef SkillList_h__
#define SkillList_h__

#include <vector>
#include "Skill.h"
#include "Manager\KTK_Enum.h"

class SkillList {
public:
	size_t getSize() const;
	Skill & getSkillByName(ESkillName name);
	Skill & getSkillByIndex(int index);
	void addSkill(const Skill & skill);

private:
	std::vector<Skill> m_skills;
};
#endif // SkillList_h__
