#include "TextManager.h"
#include <codecvt>

TextManager::TextManager() {
	//打开文件，把文件内容输入容器中。
}

const std::string TextManager::gbkToUtf8(const std::string & gbkStr) {
	using Codecvt = std::codecvt_byname<wchar_t, char, std::mbstate_t>;
	const char * GBK_LOCAL_NAME = ".936";	//win下GBK编码对应的代码页。
	std::wstring_convert<Codecvt> conv1(new Codecvt(GBK_LOCAL_NAME));
	std::wstring temp_wstr = conv1.from_bytes(gbkStr);
	std::wstring_convert<std::codecvt_utf8<wchar_t>> conv2;
	std::string utf8Str = conv2.to_bytes(temp_wstr);
	return utf8Str;
}

const char * TextManager::gbkToUtf8(const char * gbkStr) {
	return TextManager::gbkToUtf8(std::string(gbkStr)).c_str();
}

const char* TextManager::getTextOfCharName(const ECharName name) const {
	// TODO - implement TextManager::getTextOfCharName
	switch (name)
	{
		case ECharName::CAOCAO: return TextManager::gbkToUtf8("曹操"); break;
		case ECharName::DAQIAO: return TextManager::gbkToUtf8("大乔"); break;
		case ECharName::DIAOCHAN: return TextManager::gbkToUtf8("貂蝉"); break;
		case ECharName::GANNING: return TextManager::gbkToUtf8("甘宁"); break;
		case ECharName::GUANYU: return TextManager::gbkToUtf8("关羽"); break;
		case ECharName::GUOJIA: return TextManager::gbkToUtf8("郭嘉"); break;
		case ECharName::HUANGGAI: return TextManager::gbkToUtf8("黄盖"); break;
		case ECharName::HUANGYUEYING: return TextManager::gbkToUtf8("黄月英"); break;
		case ECharName::HUATUO: return TextManager::gbkToUtf8("华佗"); break;
		case ECharName::LIUBEI: return TextManager::gbkToUtf8("刘备"); break;
		case ECharName::LUXUN: return TextManager::gbkToUtf8("陆逊"); break;
		case ECharName::LVBU: return TextManager::gbkToUtf8("吕布"); break;
		case ECharName::LVMENG: return TextManager::gbkToUtf8("吕蒙"); break;
		case ECharName::MACHAO: return TextManager::gbkToUtf8("马超"); break;
		case ECharName::SIMAYI: return TextManager::gbkToUtf8("司马懿"); break;
		case ECharName::SUNSHANGXIANG: return TextManager::gbkToUtf8("孙尚香"); break;
		case ECharName::XIAHOUDUN: return TextManager::gbkToUtf8("夏侯惇"); break;
		case ECharName::SUNQUAN: return TextManager::gbkToUtf8("孙权"); break;
		case ECharName::XUZHU: return TextManager::gbkToUtf8("许褚"); break;
		case ECharName::ZHANGFEI: return TextManager::gbkToUtf8("张飞"); break;
		case ECharName::ZHANGLIAO: return TextManager::gbkToUtf8("张辽"); break;
		case ECharName::ZHAOYUN: return TextManager::gbkToUtf8("赵云"); break;
		case ECharName::ZHENJI: return TextManager::gbkToUtf8("甄姬"); break;
		case ECharName::ZHOUYU: return TextManager::gbkToUtf8("周瑜"); break;
		case ECharName::ZHUGELIANG: return TextManager::gbkToUtf8("诸葛亮"); break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
}

const char* TextManager::getTextOfCardName(const ECardName name) const {
	// TODO - implement TextManager::getTextOfCardName
	switch (name)
	{	
		case ECardName::ALLOUTOFNONE: return TextManager::gbkToUtf8("无中生有"); break;
		case ECardName::ARROWRAIN: return TextManager::gbkToUtf8("万箭齐发"); break;
		case ECardName::BAGUARANK: return TextManager::gbkToUtf8("八卦阵"); break;
		case ECardName::CHITU: return TextManager::gbkToUtf8("赤兔"); break;
		case ECardName::COUPLESWORDS: return TextManager::gbkToUtf8("雌雄双股剑"); break;
		case ECardName::DAWAN: return TextManager::gbkToUtf8("大宛"); break;
		case ECardName::DILU: return TextManager::gbkToUtf8("的卢"); break;
		case ECardName::DODGE: return TextManager::gbkToUtf8("闪"); break;
		case ECardName::DRAGONBROADSWORD: return TextManager::gbkToUtf8("青龙偃月刀"); break;
		case ECardName::DROWNLNHAPPINESS: return TextManager::gbkToUtf8("乐不思蜀"); break;
		case ECardName::DUEL: return TextManager::gbkToUtf8("决斗"); break;
		case ECardName::FLAWLESSDEFENSE: return TextManager::gbkToUtf8("无懈可击"); break;
		case ECardName::GUANSHIAXE: return TextManager::gbkToUtf8("贯石斧"); break;
		case ECardName::HARVEST: return TextManager::gbkToUtf8("五谷丰登"); break;
		case ECardName::ICESWORD: return TextManager::gbkToUtf8("寒冰剑"); break;
		case ECardName::JUEYING: return TextManager::gbkToUtf8("绝影"); break;
		case ECardName::JUSTICESHIELD: return TextManager::gbkToUtf8("仁王盾"); break;
		case ECardName::KYLINBOW: return TextManager::gbkToUtf8("麒麟弓"); break;
		case ECardName::LIGHTNING: return TextManager::gbkToUtf8("闪电"); break;
		case ECardName::MURDERWITHBORROWEDWEAPON: return TextManager::gbkToUtf8("借刀杀人"); break;
		case ECardName::OATHLNPEACHGARDEN: return TextManager::gbkToUtf8("桃园结义"); break;
		case ECardName::PEACH: return TextManager::gbkToUtf8("桃"); break;
		case ECardName::SABOTAGE: return TextManager::gbkToUtf8("过河拆桥"); break;
		case ECardName::SLASH: return TextManager::gbkToUtf8("杀"); break;
		case ECardName::SNAKESPEAR: return TextManager::gbkToUtf8("丈八蛇矛"); break;
		case ECardName::SOUTHLNVASION: return TextManager::gbkToUtf8("南蛮入侵"); break;
		case ECardName::THEFT: return TextManager::gbkToUtf8("顺手牵羊"); break;
		case ECardName::TRIPLEHALBERD: return TextManager::gbkToUtf8("方天画戟"); break;
		case ECardName::TSINGGANGSWORD: return TextManager::gbkToUtf8("青釭剑"); break;
		case ECardName::ZHUAHUANGFEIDIAN: return TextManager::gbkToUtf8("爪黄飞电"); break;
		case ECardName::ZHUGECROSSBOW: return TextManager::gbkToUtf8("诸葛连弩"); break;
		case ECardName::ZIXING: return TextManager::gbkToUtf8("紫騂"); break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
}

const char* TextManager::getTextOfSkillName(const ESkillName name) const {
	// TODO - implement TextManager::getTextOfSkillName
	switch (name)
	{
		
		case ESkillName::BIYUE: return TextManager::gbkToUtf8("闭月"); break;
		case ESkillName::FANJIAN: return TextManager::gbkToUtf8("反间"); break;
		case ESkillName::FANKUI: return TextManager::gbkToUtf8("反馈"); break;
		case ESkillName::GANGLIE: return TextManager::gbkToUtf8("刚烈"); break;
		case ESkillName::GUANXING: return TextManager::gbkToUtf8("观星"); break;
		case ESkillName::GUICAI: return TextManager::gbkToUtf8("鬼才"); break;
		case ESkillName::GUOSE: return TextManager::gbkToUtf8("国色"); break;
		case ESkillName::HUJIA: return TextManager::gbkToUtf8("护驾"); break;
		case ESkillName::JIANXIONG: return TextManager::gbkToUtf8("奸雄"); break;
		case ESkillName::JIEYIN: return TextManager::gbkToUtf8("结姻"); break;
		case ESkillName::JIJIANG: return TextManager::gbkToUtf8("激将"); break;
		case ESkillName::JIJIU: return TextManager::gbkToUtf8("急救"); break;
		case ESkillName::JIUYUAN: return TextManager::gbkToUtf8("救援"); break;
		case ESkillName::JIZHI: return TextManager::gbkToUtf8("集智"); break;
		case ESkillName::KEJI: return TextManager::gbkToUtf8("克己"); break;
		case ESkillName::KONGCHENG: return TextManager::gbkToUtf8("空城"); break;
		case ESkillName::KUROU: return TextManager::gbkToUtf8("苦肉"); break;
		case ESkillName::LIANYING: return TextManager::gbkToUtf8("连营"); break;
		case ESkillName::LIJIAN: return TextManager::gbkToUtf8("离间"); break;
		case ESkillName::LIULI: return TextManager::gbkToUtf8("流离"); break;
		case ESkillName::LONGDAN: return TextManager::gbkToUtf8("龙胆"); break;
		case ESkillName::LUOSHEN: return TextManager::gbkToUtf8("洛神"); break;
		case ESkillName::LUOYI: return TextManager::gbkToUtf8("裸衣"); break;
		case ESkillName::MASHU: return TextManager::gbkToUtf8("马术"); break;
		case ESkillName::PAOXIAO: return TextManager::gbkToUtf8("咆哮"); break;
		case ESkillName::QIANXUN: return TextManager::gbkToUtf8("谦逊"); break;
		case ESkillName::QICAI: return TextManager::gbkToUtf8("奇才"); break;
		case ESkillName::QINGGUO: return TextManager::gbkToUtf8("倾国"); break;
		case ESkillName::QINGNANG: return TextManager::gbkToUtf8("青囊"); break;
		case ESkillName::QIXI: return TextManager::gbkToUtf8("奇袭"); break;
		case ESkillName::RENDE: return TextManager::gbkToUtf8("仁德"); break;
		case ESkillName::TIANDU: return TextManager::gbkToUtf8("天妒"); break;
		case ESkillName::TIEJI: return TextManager::gbkToUtf8("铁骑"); break;
		case ESkillName::TUXI: return TextManager::gbkToUtf8("突袭"); break;
		case ESkillName::WUSHENG: return TextManager::gbkToUtf8("武圣"); break;
		case ESkillName::WUSHUANG: return TextManager::gbkToUtf8("无双"); break;
		case ESkillName::XIAOJI: return TextManager::gbkToUtf8("枭姬"); break;
		case ESkillName::YIJI: return TextManager::gbkToUtf8("遗计"); break;
		case ESkillName::YINGZI: return TextManager::gbkToUtf8("英姿"); break;
		case ESkillName::ZHIHENG: return TextManager::gbkToUtf8("制衡"); break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
}

const char* TextManager::getTextOfCardDescribe(const ECardName name) const {
	// TODO - implement TextManager::getTextOfCardDescribe
	throw "Not yet implemented";
}

const char* TextManager::getTextOfCharDescribe(const ECharName name) const {
	// TODO - implement TextManager::getTextOfCharDescribe
	throw "Not yet implemented";
}

const char* TextManager::getTextOfSuit(const ECardSuit suit) const {
	// TODO - implement TextManager::getTextOfSuit
	switch (suit)
	{
		case ECardSuit::HEART: return TextManager::gbkToUtf8("红桃"); break; 
		case ECardSuit::CLUB: return TextManager::gbkToUtf8("梅花"); break;
		case ECardSuit::DIAMOND: return TextManager::gbkToUtf8("方块"); break;
		case ECardSuit::SPADE: return TextManager::gbkToUtf8("黑桃"); break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
}

const char* TextManager::getTextOfColorName(const ECardColor color) const {
	// TODO - implement TextManager::getTextOfColorName
	switch (color)
	{
		case ECardColor::RED: return TextManager::gbkToUtf8("红色"); break;
		case ECardColor::BLACK: return TextManager::gbkToUtf8("黑色"); break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
} 
