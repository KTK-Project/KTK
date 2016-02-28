#ifndef UI_SkillPanal_h__
#define UI_SkillPanal_h__

#include <vector>
#include "cocos2d.h"
#include "Skill\Skill.h"
#include "Manager\KTK_Enum.h"

class UI_SkillPanal : public cocos2d::Node {
public:
	static UI_SkillPanal * create() {
		UI_SkillPanal * pRet = new(std::nothrow) UI_SkillPanal();
		if (pRet && pRet->init()) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool init();
	void setSkillState(const Skill & skill, ESkillState skillState);
	void refresh() const;
protected:
	UI_SkillPanal() = default;
private:
	std::vector<cocos2d::Sprite *> m_skillIcons;
};
#endif // UI_SkillPanal_h__
