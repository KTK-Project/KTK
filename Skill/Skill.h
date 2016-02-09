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
	Char_SkillName getName();

	bool isLordSkill();

	void setM_lordSkill(bool m_lordSkill);

	Skill_State getM_skillState();

	void setM_skillState(Skill_State m_skillState);
};
#endif // Skill_h__
