#ifndef EventManagers_h__
#define EventManagers_h__

#include "Player\Player.h"
#include <stack>
#include <memory>
#include "Event\Event_Base.h"

class EventManagers {

private:
	Player* m_responser;
	std::stack<std::shared_ptr<Event_Base>> m_eventsStack;
	int m_actions;

public:
	Player* getResponser();

	void setResponser(Player* responser);

	void resolveEvent();

	std::stack<std::shared_ptr<Event_Base>>& getM_eventsStack();

	bool hasActions();

	void increaseActions();

	void decreaseActions();
};
#endif // EventManagers_h__
