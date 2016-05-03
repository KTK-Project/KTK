#ifndef TextManager_h__
#define TextManager_h__

#include <string>
#include <unordered_map>
#include "KTK_Enum.h"

class TextManager {
	typedef std::unordered_map<std::string, std::string, std::hash<std::string>> DescriptionMap;
public:
	TextManager();

	//因为源代码为gbk格式，需要转换为UTF-8才能在cocos2dx正常显示字符串。
	static const std::string gbkToUtf8(const std::string & str);
	static const std::string gbkToUtf8(const char * str);
	static const std::string intToString(int number);

	const std::string getTextOfCharName(ECharName name) const;
	const std::string getStringOfCharName(ECharName name) const;
	const std::string getTextOfCardName(ECardName name) const;
	const std::string getStringOfCardName(ECardName name) const;
	const std::string getTextOfSkillName(ESkillName name) const;
	const std::string getTextOfForce(ECharForce name) const;
	const std::string getTextOfCardDescription(ECardName name) const;
	const std::string getTextOfSkillDescription(ESkillName name) const;
	const std::string getTextOfSuit(ECardSuit suit) const;
	const std::string getStringOfSuit(ECardSuit suit) const;
	const std::string getTextOfColorName(ECardColor color) const;
	const std::string getTextOfNumber(int number) const;

private:
	DescriptionMap cardDescription;
	DescriptionMap skillDescription;
};

#endif // TextManager_h__
