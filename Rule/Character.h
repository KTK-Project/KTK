#ifndef Character_h__
#define Character_h__

#include "Manager\KTK_Enum.h"
#include "Skill\SkillList.h"

class Character {
public:
	Character(ECharName name = ECharName::NONE);
	void init(ECharName name);
	ECharName getName() const;
	ECharForce getForce() const;
	ECharSex getSex() const;
	int getHP() const;
	const SkillList & getSkillList() const;
	void setSkillList(const SkillList & skillList);

private:
	ECharName m_name;
	ECharForce m_force;
	ECharSex m_sex;
	int m_HP;
	SkillList m_skillList;
};
#endif // Character_h__
