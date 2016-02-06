#ifndef Rule_GuoJia_h__
#define Rule_GuoJia_h__


class Rule_GuoJia : public Rule_Character {


public:
	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void tianDu(std::shared_ptr<Event_Judge>& event);

	void yiJi(std::shared_ptr<Event_Hurt>& event);
};
#endif // Rule_GuoJia_h__
