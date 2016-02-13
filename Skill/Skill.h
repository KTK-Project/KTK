#ifndef Skill_h__
#define Skill_h__

#include "Manager\KTK_Enum.h"

class Skill {

public:
	ESkillName m_name;
	bool m_lordSkill;
private:
	ESkillState m_skillState;

public:
	ESkillName getName() const;

	bool isLordSkill() const;

	void setLordSkill(const bool m_lordSkill) const;

	ESkillState getSkillState() const;

	void setSkillState(const ESkillState skillState) const;
};
#endif // Skill_h__
