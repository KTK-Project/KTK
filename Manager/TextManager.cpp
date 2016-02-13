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
		case ECharName::CAOCAO: return "曹操"; break;
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
		case ECardName::SLASH: return "杀"; break;
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
		case ESkillName::KONGCHENG: return "空城"; break;
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
		case ECardSuit::HEART: return "桃花"; break;
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
		case ECardColor::RED: return "红色"; break;
		default:
			throw "Can not found match!";
			break;
	}
	throw "Not yet implemented";
}
