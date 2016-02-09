#ifndef Event_Lightning_h__
#define Event_Lightning_h__

#include "Event_DelayedStrategy.h"

class Event_Lightning : public Event_DelayedStrategy {

public:
	void eventResolve();
};
#endif // Event_Lightning_h__
