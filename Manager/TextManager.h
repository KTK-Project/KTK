#ifndef TextManager_h__
#define TextManager_h__


class TextManager {


public:
	char* getTextOfCharName(Char_Name name);

	char* getTextOfCardName(Card_Name name);

	char* getTextOfSkillName(Char_SkillName name);

	char* getTextOfCardDescribe(Card_Name name);

	char* getTextOfCharDescribe(Char_Name name);

	char* getTextOfSuit(Card_Suit suit);

	char* getTextOfColorName(Card_Color color);
};
#endif // TextManager_h__
