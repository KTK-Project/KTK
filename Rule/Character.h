#ifndef Character_h__
#define Character_h__

#include "Manager\KTK_Enum.h"
#include "Skill\SkillList.h"

class Character {

private:
	Char_Force m_force;
	Char_Name m_name;
	Char_Sex m_sex;
	int m_HP;
	SkillList m_skillList;

public:
	Char_Force getForce();

	Char_Name getName();

	Char_Sex getSex();

	int getHP();

	SkillList getM_skillList();

	void setM_skillList(SkillList m_skillList);
};
#endif // Character_h__
