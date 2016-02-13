#ifndef TextManager_h__
#define TextManager_h__

#include "KTK_Enum.h"

class TextManager {


public:
	char* getTextOfCharName(const Char_Name name) const;

	char* getTextOfCardName(const Card_Name name) const;

	char* getTextOfSkillName(const Char_SkillName name) const;

	char* getTextOfCardDescribe(const Card_Name name) const;

	char* getTextOfCharDescribe(const Char_Name name) const;

	char* getTextOfSuit(const Card_Suit suit) const;

	char* getTextOfColorName(const Card_Color color) const;
};
#endif // TextManager_h__
