#ifndef Event_Judge_h__
#define Event_Judge_h__

#include <memory>
#include "Event_Base.h"
#include "Card\Card.h"

class Event_Judge : public Event_Base {
public:
	const std::shared_ptr<Card> & getJudgeCard() const;
	void setJudgeCard(const std::shared_ptr<Card> & judgeCard);
	const std::function<bool (const std::shared_ptr<Card> &)> & getJudgeCheck() const;
	void setJudgeCheck(const std::function<bool (const std::shared_ptr<Card> &)> & judgeCheck);
	bool getJudgeResult() const;
	void setJudgeResult(bool judgeResult);
	void eventResolve() const;
private:
	std::shared_ptr<Card> m_judgeCard;
	std::function<bool (const std::shared_ptr<Card> &)> m_judgeCheck;
	bool m_judgeResult;
};
#endif // Event_Judge_h__
