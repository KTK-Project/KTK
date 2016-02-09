#ifndef Event_Judge_h__
#define Event_Judge_h__

#include <memory>
#include "Event_Base.h"
#include "Card\Card.h"

class Event_Judge : public Event_Base {

private:
	std::shared_ptr<Card> m_judgeCard;
	std::function<bool (std::shared_ptr<Card>)> m_judgeCheck;
	bool m_judgeResult;

public:
	std::shared_ptr<Card> getM_judgeCard();

	void setM_judgeCard(std::shared_ptr<Card> m_judgeCard);

	std::function<bool (std::shared_ptr<Card>)> getM_judgeCheck();

	void setM_judgeCheck(std::function<bool (std::shared_ptr<Card>)> m_judgeCheck);

	bool getM_judgeResult();

	void setM_judgeResult(bool m_judgeResult);

	void eventResolve();
};
#endif // Event_Judge_h__
