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
	std::shared_ptr<Player> getInteractPlayer();

	void setInteractPlayer(std::shared_ptr<Player> m_interactPlayer);

	std::string getDescrption();

	void setDescrption(std::string m_descrption);

	bool getReceived();

	void setReceived(bool m_received);

	bool getReturned();

	void setReturned(bool m_returned);

	std::function<void (Event_Base&)> getReturnCallBack();

	void setReturnCallBack(std::function<void (Event_Base&)> m_returnCallBack);

	void eventResolve();
};
#endif // Event_Interaction_h__
