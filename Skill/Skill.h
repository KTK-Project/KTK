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

	void setLordSkill(bool m_lordSkill);

	Skill_State getSkillState();

	void setSkillState(Skill_State m_skillState);
};
#endif // Skill_h__
