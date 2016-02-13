#ifndef Event_RequestBoolean_h__
#define Event_RequestBoolean_h__

#include "Event_Interaction.h"

class Event_RequestBoolean : public Event_Interaction {

public:
	bool m_receiver;

	bool getReceiver() const;

	void setReceiver(const bool m_receiver) const;

	void eventResolve() const;
};
#endif // Event_RequestBoolean_h__
