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
	std::function<void (const Event_Base&)> m_returnCallBack;

public:
	std::shared_ptr<Player> getInteractPlayer() const;

	void setInteractPlayer(const std::shared_ptr<Player> m_interactPlayer) const;

	std::string getDescrption() const;

	void setDescrption(const std::string m_descrption) const;

	bool getReceived() const;

	void setReceived(const bool m_received) const;

	bool getReturned() const;

	void setReturned(const bool m_returned) const;

	std::function<void (const Event_Base&)> getReturnCallBack() const;

	void setReturnCallBack(const std::function<void (const Event_Base&)> m_returnCallBack) const;

	void eventResolve() const;
};
#endif // Event_Interaction_h__
