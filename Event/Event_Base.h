#ifndef Event_Base_h__
#define Event_Base_h__

#include <functional>
#include "Manager\KTK_Enum.h"

class Event_Base {

private:
	Event_Type m_eventType;
	Event_State m_eventState;
	std::function<void (const Event_Base&)> m_finishCallBack;

public:
	Event_Type getEventType() const;

	void setEventType(const Event_Type eventType) const;

	Event_State getEventState() const;

	void setEventState(const Event_State m_eventState) const;

	std::function<void (const Event_Base&)> getFinishCallBack() const;

	void setFinishCallBack(const std::function<void (const Event_Base&)> m_finishCallBack) const;

	void finish() const;

	void eventResolve() const;
};
#endif // Event_Base_h__
