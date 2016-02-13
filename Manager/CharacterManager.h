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
	std::vector<std::shared_ptr<Character>>& getCharacters() const;

	std::vector<std::shared_ptr<Character>> getCharacters(const std::function<bool (const std::shared_ptr<Character>)> filter) const;
};
#endif // CharacterManager_h__
