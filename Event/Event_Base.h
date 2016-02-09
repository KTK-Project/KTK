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

	Event_State getM_eventState();

	void setM_eventState(Event_State m_eventState);

	std::function<void (Event_Base&)> getM_finishCallBack();

	void setM_finishCallBack(std::function<void (Event_Base&)> m_finishCallBack);

	void finish();

	void eventResolve();
};
#endif // Event_Base_h__
