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
	std::shared_ptr<Player> getResponser() const;

	void setResponser(const std::shared_ptr<Player> responser) const;

	void resolveEvent() const;

	std::stack<std::shared_ptr<Event_Base>>& getEventsStack() const;

	bool hasActions() const;

	void increaseActions() const;

	void decreaseActions() const;
};
#endif // EventManagers_h__
