#ifndef Event_Base_h__
#define Event_Base_h__

#include <functional>
#include "Manager\KTK_Enum.h"

class Event_Base {

private:
	EEventType m_eventType;
	EEventState m_eventState;
	std::function<void (const Event_Base&)> m_finishCallBack;

public:
	EEventType getEventType() const;

	void setEventType(const EEventType eventType) const;

	EEventState getEventState() const;

	void setEventState(const EEventState m_eventState) const;

	std::function<void (const Event_Base&)> getFinishCallBack() const;

	void setFinishCallBack(const std::function<void (const Event_Base&)> m_finishCallBack) const;

	void finish() const;

	void eventResolve() const;
};
#endif // Event_Base_h__
