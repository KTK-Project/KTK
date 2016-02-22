#ifndef Event_AllOutOfNone_h__
#define Event_AllOutOfNone_h__

#include "Event_Strategy.h"

class Event_AllOutOfNone : public Event_Strategy {
public:
	void eventResolve() const;
};
#endif // Event_AllOutOfNone_h__
