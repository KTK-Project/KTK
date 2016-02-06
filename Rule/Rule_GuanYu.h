#ifndef Rule_GuanYu_h__
#define Rule_GuanYu_h__


class Rule_GuanYu : public Rule_Character {


public:
	void playCardStage();

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void afterProcessEvent(std::shared_ptr<Event_Base>& event);

	void wuSheng();
};
#endif // Rule_GuanYu_h__
