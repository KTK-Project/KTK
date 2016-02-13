#ifndef Skill_h__
#define Skill_h__

#include "Manager\KTK_Enum.h"

class Skill {

public:
	Char_SkillName m_name;
	bool m_lordSkill;
private:
	Skill_State m_skillState;

public:
	Char_SkillName getName() const;

	bool isLordSkill() const;

	void setLordSkill(const bool m_lordSkill) const;

	Skill_State getSkillState() const;

	void setSkillState(const Skill_State m_skillState) const;
};
#endif // Skill_h__
