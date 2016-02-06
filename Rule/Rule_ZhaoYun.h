#ifndef Rule_ZhaoYun_h__
#define Rule_ZhaoYun_h__


class Rule_ZhaoYun : public Rule_Character {


public:
	void playCardStage();

	void beforeProcessEvent(std::shared_ptr<Event_Base>& event);

	void afterProcessEvent(std::shared_ptr<Event_Base>& event);

	void longDan(std::shared_ptr<Event_Base>& event);
};
#endif // Rule_ZhaoYun_h__
