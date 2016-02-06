#ifndef Event_RequestBoolean_h__
#define Event_RequestBoolean_h__


class Event_RequestBoolean : Event_Interaction {

public:
	bool m_receiver;

	bool getM_receiver();

	void setM_receiver(bool m_receiver);

	void eventResolve();
};
#endif // Event_RequestBoolean_h__
