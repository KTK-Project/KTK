#ifndef CharacterManager_h__
#define CharacterManager_h__

#include <vector>
#include <functional>
#include <memory>
#include "Rule\Character.h"


class CharacterManager {

private:
	std::vector<std::shared_ptr<Character>> m_characters;

public:
	std::vector<std::shared_ptr<Character>>& getCharacters();

	std::vector<std::shared_ptr<Character>> getCharacters(std::function<bool (std::shared_ptr<Character>)> filter);
};
#endif // CharacterManager_h__
