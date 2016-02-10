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
	std::shared_ptr<Card> getJudgeCard();

	void setJudgeCard(std::shared_ptr<Card> m_judgeCard);

	std::function<bool (std::shared_ptr<Card>)> getJudgeCheck();

	void setJudgeCheck(std::function<bool (std::shared_ptr<Card>)> m_judgeCheck);

	bool getJudgeResult();

	void setJudgeResult(bool m_judgeResult);

	void eventResolve();
};
#endif // Event_Judge_h__
