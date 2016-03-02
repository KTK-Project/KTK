#ifndef Skill_h__
#define Skill_h__

#include "Manager\KTK_Enum.h"

class Skill {
public:
	Skill(ESkillName skillName, bool lordSkill, ESkillState skillState = ESkillState::CANTUSE);
	ESkillName getSkillName() const;
	bool isLordSkill() const;
	ESkillState getSkillState() const;
	void setSkillState(ESkillState skillState);

private:
	ESkillName m_skillName;
	bool m_lordSkill;
	ESkillState m_skillState;
};
#endif // Skill_h__
