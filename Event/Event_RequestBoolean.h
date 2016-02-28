#ifndef Event_RequestBoolean_h__
#define Event_RequestBoolean_h__

#include "Event_Interaction.h"

class Event_RequestBoolean : public Event_Interaction {
public:
	bool getReceiver() const;
	void setReceiver(bool receiver);
	void eventResolve() const;
private:
	bool m_receiver;
};
#endif // Event_RequestBoolean_h__
