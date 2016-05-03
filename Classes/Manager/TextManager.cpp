#include "platform/CCPlatformConfig.h"
#include "TextManager.h"
#include <fstream>
#include <string>
#include <unordered_map>
#include <utility>
#if CC_TARGET_PLATFORM == CC_PLATFORM_WIN32
#include <codecvt>
#endif
#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
#include "NDK_iconv.h"
#endif

using std::string;
using std::ifstream;
using std::unordered_map;
using std::hash;
using std::make_pair;
using std::getline;

TextManager::TextManager() {
	cardDescription.insert(make_pair("过河拆桥", "出牌阶段，对除你以外任意一名角色使用。弃掉该角色的一张牌。"));
	cardDescription.insert(make_pair("借刀杀人", "出牌阶段，对除你外，装备区里有武器牌的一名角色使用。该角色需对其攻击范围内，你指定的另一名角色使用一张【杀】，否则将武器交给你。"));
	cardDescription.insert(make_pair("决斗", "出牌阶段，对除你以外任意一名角色使用。由该角色开始，轮流打出一张【杀】。首先不出【杀】的一方受到"));
	cardDescription.insert(make_pair("乐不思蜀", "出牌阶段，对除你外任意一名角色使用。将【乐不思蜀】横置于该角色的判定区里，若判定结果不为【红桃】，则跳过该角色出牌阶段。"));
	cardDescription.insert(make_pair("南蛮入侵", "出牌阶段，对除你以外的所有角色使用。目标角色需一次打出一张【杀】，否则该角色受到"));
	cardDescription.insert(make_pair("闪电", "出牌阶段，对你使用。将【闪电】横置于你的判定区里。若判定结果为【黑桃】"));
	cardDescription.insert(make_pair("顺手牵羊", "出牌阶段，对除你以外，与你距离"));
	cardDescription.insert(make_pair("桃园结义", "出牌阶段，对所有角色使用。各回复"));
	cardDescription.insert(make_pair("万箭齐发", "出牌阶段，对除你以外的所有角色使用。目标角色需依次打出一张【闪】，否则该角色受到"));
	cardDescription.insert(make_pair("无懈可击", "抵消任意锦囊（生效时）将对任意一名玩家造成的影响。"));
	cardDescription.insert(make_pair("无中生有", "出牌阶段，对你自己使用。摸两张牌。"));
	cardDescription.insert(make_pair("五谷丰登", "出牌阶段，对所有角色使用。你从牌堆亮出等同于现存角色数量的牌，目标角色依次选择并获得其中的一张。"));
	cardDescription.insert(make_pair("八卦阵", "当自己需出【闪】时，可判定，若为红色花色，则等效于出了一张【闪】。"));
	cardDescription.insert(make_pair("仁王盾", "锁定技，黑色的【杀】对你无效。"));
	cardDescription.insert(make_pair("雌雄双股剑", "用【杀】攻击异性角色时，对方首先须选择：1.弃掉一张手牌"));
	cardDescription.insert(make_pair("方天画戟", "当打出的【杀】是最后一张手牌时，可攻击最多三名攻击范围内的玩家。"));
	cardDescription.insert(make_pair("贯石斧", "用【杀】攻击被对方闪避后，可弃两张牌强制命中。"));
	cardDescription.insert(make_pair("麒麟弓", "用【杀】攻击命中后，对方弃掉一匹已装备的马。"));
	cardDescription.insert(make_pair("青釭剑", "用此武器攻击，可无视对方的防具。"));
	cardDescription.insert(make_pair("青龙偃月刀", "用【杀】攻击时，只要对方出【闪】闪避，便可再出【杀】继续攻击。"));
	cardDescription.insert(make_pair("丈八蛇矛", "可用任意两张手牌当【杀】使用。"));
	cardDescription.insert(make_pair("诸葛连弩", "一回合内可以出任意张【杀】。"));
	cardDescription.insert(make_pair("寒冰剑", "用【杀】攻击成功后，可选择不造成对方的伤害，而是弃掉对方两张牌。"));

	skillDescription.insert(make_pair("奸雄", "你可以立即获得对你造成伤害的牌。"));
	skillDescription.insert(make_pair("护驾", "主公技，魏国势力角色可以替你出【闪】。"));
	skillDescription.insert(make_pair("天妒", "在你的判定牌生效后，你可以立即获得它。"));
	skillDescription.insert(make_pair("遗计", "你每受到1点伤害，可摸两张牌，将其中一张交给任意一名角色，然后将另一张交给任意一名角色。"));
	skillDescription.insert(make_pair("反馈", "你可以立即从对你造成伤害的来源处获得一张牌。"));
	skillDescription.insert(make_pair("鬼才", "在任意角色的判定牌生效前，你可以打出一张手牌代替之。"));
	skillDescription.insert(make_pair("刚烈", "你每受到一次伤害，可进行一次判定：若结果不为【红桃】，则目标来源必须进行二选一：弃两张手牌或受到你对其造成的1点伤害。"));
	skillDescription.insert(make_pair("裸衣", "摸牌阶段，你可以少摸一张牌；若如此做，该回合的出牌阶段，你使用【杀】或【决斗】（你为伤害来源时）造成的伤害+1。"));
	skillDescription.insert(make_pair("突袭", "摸牌阶段，你可以放弃摸牌，然后从至多两名（至少一名）角色的手牌里各的抽取一张牌。"));
	skillDescription.insert(make_pair("倾国", "你可以将你的【黑色】手牌当【闪】使用或打出。"));
	skillDescription.insert(make_pair("洛神", "回合开始阶段，你可以进行判定：若为【黑色】牌，立即获得此牌，并可以再次使用洛神——如此反复，直到出现【红色】牌为止。"));
	skillDescription.insert(make_pair("龙胆", "你可以将你手牌的【杀】当【闪】、【闪】当【杀】使用或打出。"));
	skillDescription.insert(make_pair("仁德", "出牌阶段，你可以将任意数量的手牌以任意分配方式交给其他角色，若你一共给出的牌数不少于于两张时，你回复1点体力。"));
	skillDescription.insert(make_pair("激将", "主公技，蜀势力角色可以替你出【杀】。"));
	skillDescription.insert(make_pair("武圣", "你可以将你的任意一张【红色】牌当【杀】使用或打出。"));
	skillDescription.insert(make_pair("集智", "每当你使用一张非延时类锦囊时，（在它结算之前）你可以立即摸一张牌。"));
	skillDescription.insert(make_pair("奇才", "你使用任何锦囊无距离限制。"));
	skillDescription.insert(make_pair("马术", "锁定技，当你计算与其他角色的距离时，始终-1。"));
	skillDescription.insert(make_pair("铁骑", "当你使用【杀】指定一名角色为目标后，你可以进行判定，若结果为【红色】，此【杀】不可被闪避。"));
	skillDescription.insert(make_pair("咆哮", "出牌阶段，你可以使个数量的【杀】。"));
	skillDescription.insert(make_pair("观星", "回合开始阶段，你可以观看牌堆顶的X张牌（X为存活角色的数量且最多为5），将其中任意顺序置于牌堆顶，其余以任意顺序置于牌堆底。"));
	skillDescription.insert(make_pair("空城", "锁定技，当你没有手牌时，你不能成为【杀】或【决斗】的目标。"));
	skillDescription.insert(make_pair("国色", "出牌阶段，你可以将你的任意【方块】花色的牌当【乐不思蜀】使用。"));
	skillDescription.insert(make_pair("流离", "当你成为【杀】的目标时，你可以弃一张牌，将此【杀】转移给你攻击范围内的另一名角色。（该角色不得是【杀】的使用者）。"));
	skillDescription.insert(make_pair("奇袭", "出牌阶段，你可以将你的任意一张【黑色】牌当【过河拆桥】使用。"));
	skillDescription.insert(make_pair("苦肉", "出牌阶段，你可以失去一点体力，然后摸两张牌。每回合中，你可以多次使用苦肉。"));
	skillDescription.insert(make_pair("谦逊", "锁定技，你不能成为【顺手牵羊】和【乐不思蜀】的目标。"));
	skillDescription.insert(make_pair("连营", "每当你失去最后一张手牌时，可立即摸一张牌。"));
	skillDescription.insert(make_pair("克己", "若你于出牌阶段未使用或打出过任何一张【杀】，你可以跳过此回合的弃牌阶段。"));
	skillDescription.insert(make_pair("制衡", "出牌阶段，你可以弃掉任意数量的牌，然后摸取等量的牌，每回合限用一次。"));
	skillDescription.insert(make_pair("救援", "主公技，锁定技，其他吴势力角色在你濒死状态下对你使用【桃】时，你额外回复1点体力。"));
	skillDescription.insert(make_pair("结姻", "出牌阶段，你可以弃两张手牌并指定一名受伤的男性角色：你和该角色各回复1点体力。每回合限用一次。"));
	skillDescription.insert(make_pair("枭姬", "当你失去一张装备区里的牌时，你可以立即摸两张牌。"));
	skillDescription.insert(make_pair("英姿", "摸牌阶段，你可以额外摸一张牌。"));
	skillDescription.insert(make_pair("反间", "出牌阶段，你可以指定另一名角色选择一种花色，抽取你的一张手牌并亮出，若此牌与所选花色不吻合，则你对该角色造成1点伤害。然后不论结果，该角色都获得此牌。每回合限用一次。"));
	skillDescription.insert(make_pair("离间", "出牌阶段，你可以弃一张牌并选择两名男性角色。若如此做，视为其中一名角色对另一名角色使用一张【决斗】（此【决斗】不能被【无懈可击】响应）。每回合限用一次。"));
	skillDescription.insert(make_pair("闭月", "回合结束阶段，你可以摸一张牌。"));
	skillDescription.insert(make_pair("急救", "你的回合外，你可以将你的任意【红色】牌当【桃】使用。"));
	skillDescription.insert(make_pair("青囊", "出牌阶段，你可以主动弃掉一张手牌，令任一角色回复1点体力。每回合限用一次。"));
	skillDescription.insert(make_pair("无双", "锁定技，你使用【杀】时，目标角色需连续使用两张【闪】才能抵消；与你进行【决斗】的角色每次需连续打出两张【杀】。"));
}

const string TextManager::gbkToUtf8(const string & str) {
#if CC_TARGET_PLATFORM == CC_PLATFORM_WIN32
	using Codecvt = std::codecvt_byname<wchar_t, char, std::mbstate_t>;
	const char * GBK_LOCAL_NAME = ".936";	//win下GBK编码对应的代码页。
	std::wstring_convert<Codecvt> conv1(new Codecvt(GBK_LOCAL_NAME));
	std::wstring temp_wstr = conv1.from_bytes(str);
	std::wstring_convert<std::codecvt_utf8<wchar_t>> conv2;
	string utf8Str = conv2.to_bytes(temp_wstr);
	return utf8Str;
#endif

#if CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID
	return GBK(str.c_str()).toUtf8();
#endif

}

const string TextManager::gbkToUtf8(const char * str) {
	return gbkToUtf8(string(str));
}

const std::string TextManager::intToString(int number) {
	std::string str;
	while (number != 0) {
		str += '0' + number % 10;
		number /= 10;
	}
	str.reserve();
	return str;
}

const string TextManager::getTextOfCharName(ECharName name) const {
	switch (name) {
		case ECharName::CAOCAO: return gbkToUtf8("曹操"); break;
		case ECharName::DAQIAO: return gbkToUtf8("大乔"); break;
		case ECharName::DIAOCHAN: return gbkToUtf8("貂蝉"); break;
		case ECharName::GANNING: return gbkToUtf8("甘宁"); break;
		case ECharName::GUANYU: return gbkToUtf8("关羽"); break;
		case ECharName::GUOJIA: return gbkToUtf8("郭嘉"); break;
		case ECharName::HUANGGAI: return gbkToUtf8("黄盖"); break;
		case ECharName::HUANGYUEYING: return gbkToUtf8("黄月英"); break;
		case ECharName::HUATUO: return gbkToUtf8("华佗"); break;
		case ECharName::LIUBEI: return gbkToUtf8("刘备"); break;
		case ECharName::LUXUN: return gbkToUtf8("陆逊"); break;
		case ECharName::LVBU: return gbkToUtf8("吕布"); break;
		case ECharName::LVMENG: return gbkToUtf8("吕蒙"); break;
		case ECharName::MACHAO: return gbkToUtf8("马超"); break;
		case ECharName::SIMAYI: return gbkToUtf8("司马懿"); break;
		case ECharName::SUNSHANGXIANG: return gbkToUtf8("孙尚香"); break;
		case ECharName::XIAHOUDUN: return gbkToUtf8("夏侯惇"); break;
		case ECharName::SUNQUAN: return gbkToUtf8("孙权"); break;
		case ECharName::XUZHU: return gbkToUtf8("许褚"); break;
		case ECharName::ZHANGFEI: return gbkToUtf8("张飞"); break;
		case ECharName::ZHANGLIAO: return gbkToUtf8("张辽"); break;
		case ECharName::ZHAOYUN: return gbkToUtf8("赵云"); break;
		case ECharName::ZHENJI: return gbkToUtf8("甄姬"); break;
		case ECharName::ZHOUYU: return gbkToUtf8("周瑜"); break;
		case ECharName::ZHUGELIANG: return gbkToUtf8("诸葛亮"); break;
		default: throw "Can't find match!"; break;
	}
}

const std::string TextManager::getStringOfCharName(ECharName name) const {
	switch (name) {
		case ECharName::CAOCAO: return "CAOCAO"; break;
		case ECharName::DAQIAO: return "DAQIAO"; break;
		case ECharName::DIAOCHAN: return "DIAOCHAN"; break;
		case ECharName::GANNING: return "GANNING"; break;
		case ECharName::GUANYU: return "GUANYU"; break;
		case ECharName::GUOJIA: return "GUOJIA"; break;
		case ECharName::HUANGGAI: return "HUANGGAI"; break;
		case ECharName::HUANGYUEYING: return "HUANGYUEYING"; break;
		case ECharName::HUATUO: return "HUATUO"; break;
		case ECharName::LIUBEI: return "LIUBEI"; break;
		case ECharName::LUXUN: return "LUXUN"; break;
		case ECharName::LVBU: return "LVBU"; break;
		case ECharName::LVMENG: return "LVMENG"; break;
		case ECharName::MACHAO: return "MACHAO"; break;
		case ECharName::SIMAYI: return "SIMAYI"; break;
		case ECharName::SUNSHANGXIANG: return "SUNSHANGXIANG"; break;
		case ECharName::XIAHOUDUN: return "XIAHOUDUN"; break;
		case ECharName::SUNQUAN: return "SUNQUAN"; break;
		case ECharName::XUZHU: return "XUZHU"; break;
		case ECharName::ZHANGFEI: return "ZHANGFEI"; break;
		case ECharName::ZHANGLIAO: return "ZHANGLIAO"; break;
		case ECharName::ZHAOYUN: return "ZHAOYUN"; break;
		case ECharName::ZHENJI: return "ZHENJI"; break;
		case ECharName::ZHOUYU: return "ZHOUYU"; break;
		case ECharName::ZHUGELIANG: return "ZHUGELIANG"; break;
		default: throw "Can't find match!"; break;
	}
}

const string TextManager::getTextOfCardName(ECardName name) const {
	switch (name) {
		case ECardName::ALLOUTOFNONE: return gbkToUtf8("无中生有"); break;
		case ECardName::ARROWRAIN: return gbkToUtf8("万箭齐发"); break;
		case ECardName::BAGUARANK: return gbkToUtf8("八卦阵"); break;
		case ECardName::CHITU: return gbkToUtf8("赤兔"); break;
		case ECardName::COUPLESWORDS: return gbkToUtf8("雌雄双股剑"); break;
		case ECardName::DAWAN: return gbkToUtf8("大宛"); break;
		case ECardName::DILU: return gbkToUtf8("的卢"); break;
		case ECardName::DODGE: return gbkToUtf8("闪"); break;
		case ECardName::DRAGONBROADSWORD: return gbkToUtf8("青龙偃月刀"); break;
		case ECardName::DROWNINHAPPINESS: return gbkToUtf8("乐不思蜀"); break;
		case ECardName::DUEL: return gbkToUtf8("决斗"); break;
		case ECardName::FLAWLESSDEFENSE: return gbkToUtf8("无懈可击"); break;
		case ECardName::GUANSHIAXE: return gbkToUtf8("贯石斧"); break;
		case ECardName::HARVEST: return gbkToUtf8("五谷丰登"); break;
		case ECardName::ICESWORD: return gbkToUtf8("寒冰剑"); break;
		case ECardName::JUEYING: return gbkToUtf8("绝影"); break;
		case ECardName::JUSTICESHIELD: return gbkToUtf8("仁王盾"); break;
		case ECardName::KYLINBOW: return gbkToUtf8("麒麟弓"); break;
		case ECardName::LIGHTNING: return gbkToUtf8("闪电"); break;
		case ECardName::MURDERWITHBORROWEDWEAPON: return gbkToUtf8("借刀杀人"); break;
		case ECardName::OATHLNPEACHGARDEN: return gbkToUtf8("桃园结义"); break;
		case ECardName::PEACH: return gbkToUtf8("桃"); break;
		case ECardName::SABOTAGE: return gbkToUtf8("过河拆桥"); break;
		case ECardName::SLASH: return gbkToUtf8("杀"); break;
		case ECardName::SNAKESPEAR: return gbkToUtf8("丈八蛇矛"); break;
		case ECardName::SOUTHLNVASION: return gbkToUtf8("南蛮入侵"); break;
		case ECardName::THEFT: return gbkToUtf8("顺手牵羊"); break;
		case ECardName::TRIPLEHALBERD: return gbkToUtf8("方天画戟"); break;
		case ECardName::TSINGGANGSWORD: return gbkToUtf8("青釭剑"); break;
		case ECardName::ZHUAHUANGFEIDIAN: return gbkToUtf8("爪黄飞电"); break;
		case ECardName::ZHUGECROSSBOW: return gbkToUtf8("诸葛连弩"); break;
		case ECardName::ZIXING: return gbkToUtf8("紫騂"); break;
		default: throw "Can't find match!"; break;
	}
}

const std::string TextManager::getStringOfCardName(ECardName name) const {
	switch (name) {
		case ECardName::ALLOUTOFNONE: return "ALLOUTOFNONE"; break;
		case ECardName::ARROWRAIN: return "ARROWRAIN"; break;
		case ECardName::BAGUARANK: return "BAGUARANK"; break;
		case ECardName::COUPLESWORDS: return "COUPLESWORDS"; break;
		case ECardName::DODGE: return "DODGE"; break;
		case ECardName::DRAGONBROADSWORD: return "DRAGONBROADSWORD"; break;
		case ECardName::DROWNINHAPPINESS: return "DROWNLNHAPPINESS"; break;
		case ECardName::DUEL: return "DUEL"; break;
		case ECardName::FLAWLESSDEFENSE: return "FLAWLESSDEFENSE"; break;
		case ECardName::GUANSHIAXE: return "GUANSHIAXE"; break;
		case ECardName::HARVEST: return "HARVEST"; break;
		case ECardName::ICESWORD: return "ICESWORD"; break;
		case ECardName::JUSTICESHIELD: return "JUSTICESHIELD"; break;
		case ECardName::KYLINBOW: return "KYLINBOW"; break;
		case ECardName::LIGHTNING: return "LIGHTNING"; break;
		case ECardName::MURDERWITHBORROWEDWEAPON: return "MURDERWITHBORROWEDWEAPON"; break;
		case ECardName::OATHLNPEACHGARDEN: return "OATHLNPEACHGARDEN"; break;
		case ECardName::PEACH: return "PEACH"; break;
		case ECardName::SABOTAGE: return "SABOTAGE"; break;
		case ECardName::SLASH: return "SLASH"; break;
		case ECardName::SNAKESPEAR: return "SNAKESPEAR"; break;
		case ECardName::SOUTHLNVASION: return "SOUTHLNVASION"; break;
		case ECardName::THEFT: return "THEFT"; break;
		case ECardName::TRIPLEHALBERD: return "TRIPLEHALBERD"; break;
		case ECardName::TSINGGANGSWORD: return "TSINGGANGSWORD"; break;
		case ECardName::ZHUGECROSSBOW: return "ZHUGECROSSBOW"; break;
		case ECardName::JUEYING: return "JUEYING"; break;
		case ECardName::ZHUAHUANGFEIDIAN: return "ZHUAHUANGFEIDIAN"; break;
		case ECardName::DILU: return "DILU"; break;
		case ECardName::ZIXING: return "ZIXING"; break;
		case ECardName::CHITU: return "CHITU"; break;
		case ECardName::DAWAN: return "DAWAN"; break;
		default: throw "Can't find match!"; break;
	}
}

const string TextManager::getTextOfSkillName(ESkillName name) const {
	switch (name) {
		case ESkillName::BIYUE: return gbkToUtf8("闭月"); break;
		case ESkillName::FANJIAN: return gbkToUtf8("反间"); break;
		case ESkillName::FANKUI: return gbkToUtf8("反馈"); break;
		case ESkillName::GANGLIE: return gbkToUtf8("刚烈"); break;
		case ESkillName::GUANXING: return gbkToUtf8("观星"); break;
		case ESkillName::GUICAI: return gbkToUtf8("鬼才"); break;
		case ESkillName::GUOSE: return gbkToUtf8("国色"); break;
		case ESkillName::HUJIA: return gbkToUtf8("护驾"); break;
		case ESkillName::JIANXIONG: return gbkToUtf8("奸雄"); break;
		case ESkillName::JIEYIN: return gbkToUtf8("结姻"); break;
		case ESkillName::JIJIANG: return gbkToUtf8("激将"); break;
		case ESkillName::JIJIU: return gbkToUtf8("急救"); break;
		case ESkillName::JIUYUAN: return gbkToUtf8("救援"); break;
		case ESkillName::JIZHI: return gbkToUtf8("集智"); break;
		case ESkillName::KEJI: return gbkToUtf8("克己"); break;
		case ESkillName::KONGCHENG: return gbkToUtf8("空城"); break;
		case ESkillName::KUROU: return gbkToUtf8("苦肉"); break;
		case ESkillName::LIANYING: return gbkToUtf8("连营"); break;
		case ESkillName::LIJIAN: return gbkToUtf8("离间"); break;
		case ESkillName::LIULI: return gbkToUtf8("流离"); break;
		case ESkillName::LONGDAN: return gbkToUtf8("龙胆"); break;
		case ESkillName::LUOSHEN: return gbkToUtf8("洛神"); break;
		case ESkillName::LUOYI: return gbkToUtf8("裸衣"); break;
		case ESkillName::MASHU: return gbkToUtf8("马术"); break;
		case ESkillName::PAOXIAO: return gbkToUtf8("咆哮"); break;
		case ESkillName::QIANXUN: return gbkToUtf8("谦逊"); break;
		case ESkillName::QICAI: return gbkToUtf8("奇才"); break;
		case ESkillName::QINGGUO: return gbkToUtf8("倾国"); break;
		case ESkillName::QINGNANG: return gbkToUtf8("青囊"); break;
		case ESkillName::QIXI: return gbkToUtf8("奇袭"); break;
		case ESkillName::RENDE: return gbkToUtf8("仁德"); break;
		case ESkillName::TIANDU: return gbkToUtf8("天妒"); break;
		case ESkillName::TIEJI: return gbkToUtf8("铁骑"); break;
		case ESkillName::TUXI: return gbkToUtf8("突袭"); break;
		case ESkillName::WUSHENG: return gbkToUtf8("武圣"); break;
		case ESkillName::WUSHUANG: return gbkToUtf8("无双"); break;
		case ESkillName::XIAOJI: return gbkToUtf8("枭姬"); break;
		case ESkillName::YIJI: return gbkToUtf8("遗计"); break;
		case ESkillName::YINGZI: return gbkToUtf8("英姿"); break;
		case ESkillName::ZHIHENG: return gbkToUtf8("制衡"); break;
		default: throw "Can't find match!"; break;
	}
}

const std::string TextManager::getTextOfForce(ECharForce name) const {
	switch (name) {
		case ECharForce::WEI: return gbkToUtf8("魏"); break;
		case ECharForce::SHU: return gbkToUtf8("蜀"); break;
		case ECharForce::WU: return gbkToUtf8("吴"); break;
		case ECharForce::QUN: return gbkToUtf8("群"); break;
		default: throw "Can't find match!"; break;
	}
}

const string TextManager::getTextOfCardDescription(ECardName name) const {
	return cardDescription.at(getTextOfCardName(name)).c_str();
}

const string TextManager::getTextOfSkillDescription(ESkillName name) const {
	return skillDescription.at(getTextOfSkillName(name)).c_str();
}

const string TextManager::getTextOfSuit(ECardSuit suit) const {
	switch (suit) {
		case ECardSuit::HEART: return gbkToUtf8("红桃"); break;
		case ECardSuit::CLUB: return gbkToUtf8("梅花"); break;
		case ECardSuit::DIAMOND: return gbkToUtf8("方块"); break;
		case ECardSuit::SPADE: return gbkToUtf8("黑桃"); break;
		default: throw "Can't find match!"; break;
	}
}

const std::string TextManager::getStringOfSuit(ECardSuit suit) const {
	switch (suit) {
		case ECardSuit::CLUB: return "CLUB"; break;
		case ECardSuit::DIAMOND: return "DIAMOND"; break;
		case ECardSuit::HEART: return "HEART"; break;
		case ECardSuit::SPADE: return "SPADE"; break;
		default: throw "Can't find match!"; break;
	}
}

const string TextManager::getTextOfColorName(ECardColor color) const {
	switch (color) {
		case ECardColor::RED: return gbkToUtf8("红色"); break;
		case ECardColor::BLACK: return gbkToUtf8("黑色"); break;
		default: throw "Can't find match!"; break;
	}
}

const std::string TextManager::getTextOfNumber(int number) const {
	switch (number) {
		case 1: return gbkToUtf8("A"); break;
		case 2: return gbkToUtf8("2"); break;
		case 3: return gbkToUtf8("3"); break;
		case 4: return gbkToUtf8("4"); break;
		case 5: return gbkToUtf8("5"); break;
		case 6: return gbkToUtf8("6"); break;
		case 7: return gbkToUtf8("7"); break;
		case 8: return gbkToUtf8("8"); break;
		case 9: return gbkToUtf8("9"); break;
		case 10: return gbkToUtf8("10"); break;
		case 11: return gbkToUtf8("J"); break;
		case 12: return gbkToUtf8("Q"); break;
		case 13: return gbkToUtf8("K"); break;
		default: throw "Can't find match!"; break;
	}
}
