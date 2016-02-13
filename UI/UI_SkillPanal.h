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
	void init() const;

	void setSkillState(const Skill skill, const ESkillState state) const;

	void refresh() const;
};
#endif // UI_SkillPanal_h__
