#ifndef Event_DrownInHappiness_h__
#define Event_DrownInHappiness_h__

#include "Event_DelayedStrategy.h"

class Event_DrownInHappiness : public Event_DelayedStrategy {


public:
	void eventResolve() const;
};
#endif // Event_DrownInHappiness_h__
