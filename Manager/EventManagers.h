#ifndef EventManagers_h__
#define EventManagers_h__

#include "Player\Player.h"
#include <stack>
#include <memory>
#include "Event\Event_Base.h"

class EventManagers {
public:
	// 处理栈中的最后一个Event
	void resolveEvent() const;

	std::stack<std::shared_ptr<Event_Base>> & getEventsStack();

	bool hasActions() const;
	void increaseActions();
	void decreaseActions();

private:
	std::stack<std::shared_ptr<Event_Base>> m_eventsStack;
	int m_actions;
};
#endif // EventManagers_h__
