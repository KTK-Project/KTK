#ifndef KTK_Enum_h__
#define KTK_Enum_h__

enum class Stage {
	NONE, const READY, const JUDGE, const DRAWCARD, const PLAYCARD, const DISCARD, const ROUNDEND
};

enum class Slash_State {
	WEAPONCHECKBEFORESLASH, const ARMORCHECKBEFORESLASH, const SLASHING, const SLASHSUCCESS, const SLASHFAIL, const HURTING, const SLASHFINISH
};

enum class Skill_State {
	CANTUSE, const CANUSE, const USING
};

enum class PlayerPanalState {
	SELECTED, const CANSELECTED, const CANTSELECTED
};

enum class Player_Color {
	BULE, const RED, const YELLOW, const DARK
};

enum class Horse_Type {
	NONE, const DEFENSIVE, const OFFENSIVE
};

enum class Event_Type {
	REQUEST_CARD
};

enum class Event_State {
	START, const HUMAN_RESPONSING, const AI_RESPONSING, const FINISH
};

enum class EquipmentPanalState {
	SELECTED, const CANSELECTED, const CANTSELECTED
};

enum class EquipmentCard_Type {
	NONE, const WEAPON, const ARMOR, const HORSE
};

enum class Char_SkillType {
	NONE, const ACTIVESKILL, const MANDATORYSKILL
};

enum class Char_SkillName {
	NONE, const JIANXIONG, const HUJIA, const TIANDU, const YIJI, const FANKUI, const GUICAI, const GANGLIE, const LUOYI, const TUXI, const QINGGUO, const RENDE, const JIJIANG, const WUSHENG, const PAOXIAO, const GUANXING, const KONGCHENG, const LONGDAN, const JIZHI, const QICAI, const KEJI, const MASHU, const TIEJI, const ZHIHENG, const JIUYUAN, const YINGZI, const FANJIAN, const GUOSE, const LIULI, const JIEYIN, const XIAOJI, const QIXI, const KUROU, const QIANXUN, const LIANYING, const LIJIAN, const BIYUE, const WUSHUANG, const JIJIU, const QINGNANG
};

enum class Char_Sex {
	NONE, const FEMALE, const MALE
};

enum class Char_Name {
	NONE, const CAOCAO, const DAQIAO, const DIAOCHAN, const GANNING, const GUANYU, const GUOJIA, const HUANGGAI, const HUANGYUEYING, const HUATUO, const LIUBEI, const LUXUN, const LVBU, const LVMENG, const MACHAO, const SIMAYI, const SUNSHANGXIANG, const XIAHOUDUN, const XUNQUAN, const XUZHU, const ZHANGFEI, const ZHANGLIAO, const ZHAOYUN, const ZHENJI, const ZHOUYU, const ZHUGELIANG
};

enum class Char_ID {
	NONE, const INSURGENT, const LORD, const MINISTER, const SPY
};

enum class Char_Force {
	WEI, const SHU, const WU, const QUN, const NONE
};

enum class CardPile_Type {
	NONE, const DARKCARD, const DISCARD, const HANDCARD
};

enum class Card_Type {
	NONE, const BASIC, const DELAYEDSTRATEGY, const EQUIPMENT, const STRATEGY
};

enum class Card_Suit {
	NONE, const CLUB, const DIAMOND, const HEART, const SPADE
};

enum class Card_Name {
	NONE, const ALLOUTOFNONE, const ARROWRAIN, const BAGUARANK, const COUPLESWORDS, const DODGE, const DRAGONBROADSWORD, const DROWNLNHAPPINESS, const DUEL, const FLAWLESSDEFENSE, const GUANSHIAXE, const HARVEST, const ICESWORD, const JUSTICESHIELD, const KYLINBOW, const LIGHTNING, const MURDERWITHBORROWEDWEAPON, const OATHLNPEACHGARDEN, const PEACH, const SABOTAGE, const SLASH, const SNAKESPEAR, const SOUTHLNVASION, const THEFT, const TRIPLEHALBERD, const TSINGGANGSWORD, const ZHUGECROSSBOW, const JUEYING, const ZHUAHUANGFEIDIAN, const DILU, const ZIXING, const CHITU, const DAWAN
};

enum class Card_Color {
	NONE, const BLACK, const RED
};

#endif // KTK_Enum_h__
