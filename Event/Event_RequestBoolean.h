#ifndef Event_RequestBoolean_h__
#define Event_RequestBoolean_h__

#include "Event_Interaction.h"

class Event_RequestBoolean : public Event_Interaction {

public:
	bool m_receiver;

	bool getM_receiver();

	void setM_receiver(bool m_receiver);

	void eventResolve();
};
#endif // Event_RequestBoolean_h__
