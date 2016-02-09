#ifndef Event_Judge_h__
#define Event_Judge_h__


class Event_Judge : Event_Base {

private:
	Card* m_judgeCard;
	std::function<bool (Card*)> m_judgeCheck;
	bool m_judgeResult;

public:
	Card* getM_judgeCard();

	void setM_judgeCard(Card* m_judgeCard);

	std::function<bool (Card*)> getM_judgeCheck();

	void setM_judgeCheck(std::function<bool (std::shared_ptr<Card>)> m_judgeCheck);

	bool getM_judgeResult();

	void setM_judgeResult(bool m_judgeResult);

	void eventResolve();
};
#endif // Event_Judge_h__
