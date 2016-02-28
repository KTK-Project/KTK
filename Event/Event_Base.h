#ifndef Event_Base_h__
#define Event_Base_h__

#include <functional>
#include "Manager\KTK_Enum.h"

class Event_Base {
public:
	EEventType getEventType() const;
	void setEventType(EEventType eventType);
	EEventState getEventState() const;
	void setEventState(EEventState eventState);
	const std::function<void (const Event_Base &)> & getFinishCallBack() const;
	void setFinishCallBack(const std::function<void (const Event_Base &)> & finishCallBack);
	void finish() const;
	void eventResolve() const;
private:
	EEventType m_eventType;
	EEventState m_eventState;
	std::function<void (const Event_Base&)> m_finishCallBack;
};
#endif // Event_Base_h__
