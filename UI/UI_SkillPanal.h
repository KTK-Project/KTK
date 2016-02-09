#ifndef UI_SkillPanal_h__
#define UI_SkillPanal_h__

#include <vector>
#include "cocos2d.h"
#include "Skill\Skill.h"
#include "Manager\KTK_Enum.h"

class UI_SkillPanal {

private:
	std::vector<cocos2d::Sprite*> m_skillIcons;

public:
	void init();

	void setSkillState(Skill skill, Skill_State state);

	void refresh();
};
#endif // UI_SkillPanal_h__
