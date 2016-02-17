#include "TextManager.h"
#include <codecvt>
#include <fstream>
#include <string>
#include <unordered_map>
#include <utility>

using std::string;
using std::ifstream;
using std::unordered_map;
using std::hash;
using std::make_pair;
using std::getline;

TextManager::TextManager() {
	//card.dat和skill.dat文件已经为UTF-8编码
	ifstream cardInput("card.dat");
	if (!cardInput) throw "Can't find card.dat!";
	while (cardInput) {
		string str1, str2;
		cardInput >> str1;
		getline(cardInput, str2);
		cardDescription.insert(make_pair(str1, str2));
	}

	ifstream skillInput("skill.dat");
	if (!skillInput) throw "Can't find skill.dat!";
	while (skillInput) {
		string str1, str2;
		skillInput >> str1;
		getline(skillInput, str2);
		skillDescription.insert(make_pair(str1, str2));
	}
}

const string TextManager::gbkToUtf8(const string & gbkStr) {
	using Codecvt = std::codecvt_byname<wchar_t, char, std::mbstate_t>;
	const char * GBK_LOCAL_NAME = ".936";	//win下GBK编码对应的代码页。
	std::wstring_convert<Codecvt> conv1(new Codecvt(GBK_LOCAL_NAME));
	std::wstring temp_wstr = conv1.from_bytes(gbkStr);
	std::wstring_convert<std::codecvt_utf8<wchar_t>> conv2;
	string utf8Str = conv2.to_bytes(temp_wstr);
	return utf8Str;
}

const string TextManager::gbkToUtf8(const char * gbkStr) {
	return gbkToUtf8(string(gbkStr));
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
		case ECardName::DROWNLNHAPPINESS: return gbkToUtf8("乐不思蜀"); break;
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

const string TextManager::getTextOfColorName(ECardColor color) const {
	switch (color) {
		case ECardColor::RED: return gbkToUtf8("红色"); break;
		case ECardColor::BLACK: return gbkToUtf8("黑色"); break;
		default: throw "Can't find match!"; break;
	}
} 
