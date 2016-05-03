#include "PlayersManager.h"
#include "KTK_Info.h"
#include <algorithm>

using std::shared_ptr;
using std::vector;
using std::function;

PlayersManager::PlayersManager() {
	m_players.resize(8);
}

const shared_ptr<Player> & PlayersManager::getLordPlayer() const {
	return m_lordPlayer;
}

void PlayersManager::setLordPlayer(const shared_ptr<Player> & lordPlayer) {
	auto currentIndex = std::find(m_players.cbegin(), m_players.cend(), lordPlayer) - m_players.cbegin();
	if (currentIndex == KTK_Info::PLAYER_QUANTITY)
		throw "Can't find player";
	m_lordPlayer = lordPlayer;
}

const shared_ptr<Player> & PlayersManager::getCurrentPlayer() const {
	return m_currentPlayer;
}

void PlayersManager::setCurrentPlayer(const shared_ptr<Player> & currentPlayer) {
	m_currentPlayer = currentPlayer;
}

const shared_ptr<Player> & PlayersManager::getForwardPlayer() const {
	return m_forwardPlayer;
}

void PlayersManager::setForwardPlayer(const shared_ptr<Player> & forwardPlayer) {
	m_forwardPlayer = forwardPlayer;
}

vector<shared_ptr<Player>> & PlayersManager::getPlayers() {
	return m_players;
}

vector<shared_ptr<Player>> PlayersManager::getPlayersWithFilter(const function<bool(const shared_ptr<Player> &)> & filter) const {
	vector<shared_ptr<Player>> result;
	for (auto & player : m_players)
		if (filter(player))
			result.push_back(player);
	return result;
}

shared_ptr<Player> PlayersManager::getNextPlayer(const shared_ptr<Player> & currentPlayer) const {
	int currentPlayerPosition = currentPlayer->getPosition();
	for (auto & player : m_players)
		if (player->getPosition() == (currentPlayerPosition + 1) % KTK_Info::PLAYER_QUANTITY)
			return player;
	return shared_ptr<Player>(nullptr);
}

shared_ptr<Player> PlayersManager::getNextPlayerWithFilter(const shared_ptr<Player> & currentPlayer, const function<bool(const shared_ptr<Player> &)> & filter) const {
	int currentPlayerIndex = std::find(m_players.cbegin(), m_players.cend(), currentPlayer) - m_players.cbegin();
	if (currentPlayerIndex == KTK_Info::PLAYER_QUANTITY)
		throw "Can't find player!";
	for (int i = 1; i < KTK_Info::PLAYER_QUANTITY; i++) {
		int resultIndex = (currentPlayerIndex + i) % KTK_Info::PLAYER_QUANTITY;
		if (filter(m_players[resultIndex]))
			return m_players[resultIndex];
	}
	return shared_ptr<Player>(nullptr);
}

int PlayersManager::getPlayerCount(const function<bool(const shared_ptr<Player> &)> & filter) const {
	int count = 0;
	for (auto & player : m_players)
		if (filter(player))
			count++;
	return count;
}
