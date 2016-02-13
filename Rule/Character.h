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
	Char_Force getForce() const;

	Char_Name getName() const;

	Char_Sex getSex() const;

	int getHP() const;

	SkillList getSkillList() const;

	void setSkillList(const SkillList m_skillList) const;
};
#endif // Character_h__
