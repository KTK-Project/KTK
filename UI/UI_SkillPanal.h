#ifndef UI_SkillPanal_h__
#define UI_SkillPanal_h__


class UI_SkillPanal {

private:
	vector<Sprite*> m_skillIcons;

public:
	void init();

	void setSkillState(Skill skill, Skill_State state);

	void refresh();
};
#endif // UI_SkillPanal_h__
