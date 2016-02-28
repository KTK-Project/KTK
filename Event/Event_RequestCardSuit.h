#ifndef Event_RequestCardSuit_h__
#define Event_RequestCardSuit_h__

#include "Event_Interaction.h"
#include "Manager\KTK_Enum.h"

class Event_RequestCardSuit : public Event_Interaction {
public:
	ECardSuit getReceiver() const;
	void setReceiver(ECardSuit receiver);
	void eventResolve() const;
private:
	ECardSuit m_receiver;
};
#endif // Event_RequestCardSuit_h__
