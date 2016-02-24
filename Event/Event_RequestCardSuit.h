#ifndef Event_RequestCardSuit_h__
#define Event_RequestCardSuit_h__

#include "Event_Interaction.h"
#include "Manager\KTK_Enum.h"

class Event_RequestCardSuit : public Event_Interaction {

public:
	ECardSuit m_receiver;

	void eventResolve() const;
};
#endif // Event_RequestCardSuit_h__
