#ifndef Event_Base_h__
#define Event_Base_h__

#include <functional>
#include "Manager\KTK_Enum.h"

class Event_Base {

private:
	Event_Type m_eventType;
	Event_State m_eventState;
	std::function<void (Event_Base&)> m_finishCallBack;

public:
	Event_Type getEventType();

	void setEventType(Event_Type eventType);

	Event_State getEventState();

	void setEventState(Event_State m_eventState);

	std::function<void (Event_Base&)> getFinishCallBack();

	void setFinishCallBack(std::function<void (Event_Base&)> m_finishCallBack);

	void finish();

	void eventResolve();
};
#endif // Event_Base_h__
