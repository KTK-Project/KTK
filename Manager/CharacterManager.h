#ifndef CharacterManager_h__
#define CharacterManager_h__

#include <vector>
#include <functional>
#include "Rule\Character.h"


class CharacterManager {

private:
	std::vector<Character*> m_characters;

public:
	std::vector<Character*>& getCharacters();

	std::vector<Character*> getCharacters(std::function<bool (Character*)> filter);
};
#endif // CharacterManager_h__
