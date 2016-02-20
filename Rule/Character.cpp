#include "Character.h"

Character::Character(ECharName name /*= ECharName::NONE*/) { 
	m_name = name;
	switch (name)
	{
		case ECharName::CAOCAO:
			m_force = ECharForce::WEI;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::JIANXIONG, false));
			m_skillList.addSkill(Skill(ESkillName::HUJIA, true));
			break;
		case ECharName::DAQIAO:
			m_force = ECharForce::WU;
			m_sex = ECharSex::FEMALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::GUOSE, false));
			m_skillList.addSkill(Skill(ESkillName::LIULI, false));
			break;
		case ECharName::DIAOCHAN:
			m_force = ECharForce::QUN;
			m_sex = ECharSex::FEMALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::LIJIAN, false));
			m_skillList.addSkill(Skill(ESkillName::BIYUE, false));
			break;
		case ECharName::GANNING:
			m_force = ECharForce::WU;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::QIXI, false));
			break;
		case ECharName::GUANYU:
			m_force = ECharForce::WU;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::WUSHENG, false));
			break;
		case ECharName::GUOJIA:
			m_force = ECharForce::WEI;
			m_sex = ECharSex::MALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::TIANDU, false));
			m_skillList.addSkill(Skill(ESkillName::YIJI, false));
			break;
		case ECharName::HUANGGAI:
			m_force = ECharForce::WU;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::KUROU,false));
			break;
		case ECharName::HUANGYUEYING:
			m_force = ECharForce::SHU;
			m_sex = ECharSex::FEMALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::JIZHI, false));
			m_skillList.addSkill(Skill(ESkillName::QICAI, false));
			break;
		case ECharName::HUATUO:
			m_force = ECharForce::QUN;
			m_sex = ECharSex::MALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::JIJIU, false));
			m_skillList.addSkill(Skill(ESkillName::QINGNANG, false));
			break;
		case ECharName::LIUBEI:
			m_force = ECharForce::SHU;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::RENDE, false));
			m_skillList.addSkill(Skill(ESkillName::JIJIANG, true));
			break;
		case ECharName::LUXUN:
			m_force = ECharForce::WU;
			m_sex = ECharSex::MALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::QIANXUN, false));
			m_skillList.addSkill(Skill(ESkillName::LIANYING, false));
			break;
		case ECharName::LVBU:
			m_force = ECharForce::QUN;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::WUSHUANG));
			break;
		case ECharName::LVMENG:
			m_force = ECharForce::WU;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::KEJI,false));
			break;
		case ECharName::MACHAO:
			m_force = ECharForce::SHU;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::MASHU, false));
			m_skillList.addSkill(Skill(ESkillName::TIEJI, false));
			break;
		case ECharName::SIMAYI:
			m_force = ECharForce::WEI;
			m_sex = ECharSex::MALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::FANKUI, false));
			m_skillList.addSkill(Skill(ESkillName::GUICAI, false));
			break;
		case ECharName::SUNSHANGXIANG:
			m_force = ECharForce::WU;
			m_sex = ECharSex::FEMALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::JIEYIN, false));
			m_skillList.addSkill(Skill(ESkillName::XIAOJI, false));
			break;
		case ECharName::XIAHOUDUN:
			m_force = ECharForce::WEI;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::GANGLIE, false));
			break;
		case ECharName::SUNQUAN:
			m_force = ECharForce::WU;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::ZHIHENG, false));
			m_skillList.addSkill(Skill(ESkillName::JIUYUAN, true));
			break;
		case ECharName::XUZHU:
			m_force = ECharForce::WEI;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::LUOYI,false));
			break;
		case ECharName::ZHANGFEI:
			m_force = ECharForce::SHU;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::PAOXIAO, false));
			break;
		case ECharName::ZHANGLIAO:
			m_force = ECharForce::WEI;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::TUXI, false));
			break;
		case ECharName::ZHAOYUN:
			m_force = ECharForce::SHU;
			m_sex = ECharSex::MALE;
			m_HP = 4;
			m_skillList.addSkill(Skill(ESkillName::LONGDAN, false));
			break;
		case ECharName::ZHENJI:
			m_force = ECharForce::WEI;
			m_sex = ECharSex::FEMALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::QINGGUO, false));
			m_skillList.addSkill(Skill(ESkillName::LUOSHEN, false));
			break;
		case ECharName::ZHOUYU:
			m_force = ECharForce::WU;
			m_sex = ECharSex::MALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::YINGZI, false));
			m_skillList.addSkill(Skill(ESkillName::FANJIAN, false));
			break;
		case ECharName::ZHUGELIANG:
			m_force = ECharForce::SHU;
			m_sex = ECharSex::MALE;
			m_HP = 3;
			m_skillList.addSkill(Skill(ESkillName::GUANXING, false));
			m_skillList.addSkill(Skill(ESkillName::KONGCHENG, false));
			break;
		default:	throw "Can't find CharacterName(class character)";
			break;
	}
}

void Character::init(ECharName name) {
//	Todo: stm
}

ECharName Character::getName() const {
	return m_name;
}

ECharForce Character::getForce() const {
	return m_force;
}

ECharSex Character::getSex() const {
	return m_sex;
}

int Character::getHP() const {
	return m_HP;
}

const SkillList & Character::getSkillList() const {
	return m_skillList;
}

void Character::setSkillList(const SkillList & skillList) {
	m_skillList = skillList;
}
