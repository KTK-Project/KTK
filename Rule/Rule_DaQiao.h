#ifndef Rule_DaQiao_h__
#define Rule_DaQiao_h__


class Rule_DaQiao : public Rule_Character {


public:
	void playCardStage();

	void guoSe();

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void liuLi(std::shared_ptr<Event_Base>& event);
};
#endif // Rule_DaQiao_h__
