#ifndef SkillList_h__
#define SkillList_h__


class SkillList {

private:
	vector<Skill> m_skillList;

public:
	int getSize();

	Skill& getSkillByName(Char_SkillName name);

	int getIndexByName(Char_SkillName name);

	void addSkill(Skill& skill);
};
#endif // SkillList_h__
