#ifndef EventManagers_h__
#define EventManagers_h__

#include "Player\Player.h"
#include <stack>
#include <memory>
#include "Event\Event_Base.h"

class EventManagers {

private:
	std::shared_ptr<Player> m_responser;
	std::stack<std::shared_ptr<Event_Base>> m_eventsStack;
	int m_actions;

public:
	std::shared_ptr<Player> getResponser();

	void setResponser(std::shared_ptr<Player> responser);

	void resolveEvent();

	std::stack<std::shared_ptr<Event_Base>>& getM_eventsStack();

	bool hasActions();

	void increaseActions();

	void decreaseActions();
};
#endif // EventManagers_h__
