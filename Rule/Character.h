#ifndef Character_h__
#define Character_h__

#include "Manager\KTK_Enum.h"
#include "Skill\SkillList.h"

class Character {

private:
	ECharForce m_force;
	ECharName m_name;
	ECharSex m_sex;
	int m_HP;
	SkillList m_skillList;

public:
	ECharForce getForce() const;

	ECharName getName() const;

	ECharSex getSex() const;

	int getHP() const;

	SkillList getSkillList() const;

	void setSkillList(const SkillList m_skillList) const;
};
#endif // Character_h__
