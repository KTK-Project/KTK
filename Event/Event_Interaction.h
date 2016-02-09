#ifndef Event_Interaction_h__
#define Event_Interaction_h__

#include "Event_Base.h"
#include "Player\Player.h"
#include <string>
#include <functional>

class Event_Interaction : public Event_Base {

private:
	std::shared_ptr<Player> m_interactPlayer;
	std::string m_descrption;
	bool m_received;
	bool m_returned;
	std::function<void (Event_Base&)> m_returnCallBack;

public:
	std::shared_ptr<Player> getM_interactPlayer();

	void setM_interactPlayer(std::shared_ptr<Player> m_interactPlayer);

	std::string getM_descrption();

	void setM_descrption(std::string m_descrption);

	bool getM_received();

	void setM_received(bool m_received);

	bool getM_returned();

	void setM_returned(bool m_returned);

	std::function<void (Event_Base&)> getM_returnCallBack();

	void setM_returnCallBack(std::function<void (Event_Base&)> m_returnCallBack);

	void eventResolve();
};
#endif // Event_Interaction_h__
