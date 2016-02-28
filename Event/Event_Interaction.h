#ifndef Event_Interaction_h__
#define Event_Interaction_h__

#include "Event_Base.h"
#include "Player\Player.h"
#include <string>
#include <functional>

class Event_Interaction : public Event_Base {
public:
	const std::shared_ptr<Player> & getInteractPlayer() const;
	void setInteractPlayer(const std::shared_ptr<Player> & interactPlayer);
	const std::string & getDescrption() const;
	void setDescrption(const std::string & descrption);
	bool getReceived() const;
	void setReceived(bool received);
	bool getReturned() const;
	void setReturned(bool returned);
	const std::function<void (const Event_Base &)> & getReturnCallBack() const;
	void setReturnCallBack(const std::function<void (const Event_Base &)> & returnCallBack);
	void eventResolve() const;
private:
	std::shared_ptr<Player> m_interactPlayer;
	std::string m_descrption;
	bool m_received;
	bool m_returned;
	std::function<void (const Event_Base &)> m_returnCallBack;
};
#endif // Event_Interaction_h__
