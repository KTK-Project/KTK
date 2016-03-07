#ifndef UI_SkillPanal_h__
#define UI_SkillPanal_h__

#include <vector>
#include "cocos2d.h"
#include "Skill\Skill.h"
#include "Player\Player.h"
#include "Manager\KTK_Enum.h"

class UI_SkillPanal : public cocos2d::Node {
public:
	static UI_SkillPanal * create(const std::shared_ptr<Player> & player) {
		UI_SkillPanal * pRet = new(std::nothrow) UI_SkillPanal();
		if (pRet && pRet->initWithPlayer(player)) {
			pRet->autorelease();
			return pRet;
		}
		else {
			delete pRet;
			pRet = NULL;
			return NULL;
		}
	}
	bool initWithPlayer(const std::shared_ptr<Player> & player);
	void setSkillState(ESkillName skillName, ESkillState skillState);
	void setSkillCallBack(ESkillName skillName, const std::function<void()> & skillCallBack);
	void refresh();
protected:
	UI_SkillPanal() = default;
private:
	std::shared_ptr<Player> m_player;
	std::vector<cocos2d::LayerColor *> m_skillIcons;
	std::vector<cocos2d::Label *> m_skillLabel;
	std::vector<std::function<void()>> m_skillCallBack;
};
#endif // UI_SkillPanal_h__
